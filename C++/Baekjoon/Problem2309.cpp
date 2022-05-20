#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int sum=0;
    for(int i=0; i<9; i++)
    {
        int a;
        cin>>a;
        sum+=a;
        v.push_back(a);
    }
    
    for(int i=0; i<8; i++)
    {
        for(int j=1; j<9; j++)
        {
            if(v[i]+v[j]==sum-100)
            {
                v.erase(v.begin()+i);
                v.erase(v.begin()+j-1);
                goto EXIT;
            }
        }
    }

EXIT:
    sort(v.begin(),v.end());

    for(auto it:v)
    {
        cout<<it<<'\n';
    }
    return 0;
}