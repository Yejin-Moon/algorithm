#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2;
    int n,m;
    cin>>n>>m;
    int k;
    cin>>k;
    int tmp=0,maxv=0;
    for(int i=0; i<k; i++)
    {
        int a,b;
        cin>>a>>b;
        if(a==0) v1.push_back(b);
        else v2.push_back(b);
    }
    v1.push_back(0);
    v2.push_back(0);
    v1.push_back(m);
    v2.push_back(n);
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    for(int i=0; i<v1.size()-1; i++)
    {
        for(int j=0; j<v2.size()-1; j++)
        {
            tmp = (v1[i+1]-v1[i])*(v2[j+1]-v2[j]);
            maxv=maxv<tmp?tmp:maxv;
        }
    }
    cout<<maxv;
}