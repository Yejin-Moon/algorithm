#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int n, g;
    cin>>n>>g;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int cnt=0;
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                int r = v[i]+v[j]+v[k];
                if(r<=g && r>cnt) cnt = r;
            }
        }
    }
    cout<<cnt<<'\n';
}