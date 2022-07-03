#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int absdiff(int a, int b)
{
    if(a>b) return a-b;
    else return b-a;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    vector<int> temp;
    for(int i=0; i<n; i++)
    {
        int s, b;
        cin>>s>>b;
        v.push_back(make_pair(s,b));
    }
    sort(v.begin(),v.end());
    int iter=1;
    int small = 1000000000;

    do{
        for(int i=0; i<n; i++)
        {
            temp.push_back(1);
            int rs = 1, rb=0;
            for(int j=0; j<n; j++)
            {
                if(temp[i]==1)
                {
                    rs*=v[j].first;
                    rb+=v[j].second;
                    int diff = absdiff(rs,rb);
                    if(diff<small) small = diff;
                }
            }
        }
    } while(next_permutation(temp.begin(),temp.end()));

    cout<<small;
}