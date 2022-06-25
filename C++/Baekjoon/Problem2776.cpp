#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        set<int> m;
        int n;
        cin>>n;
        for(int j=0; j<n; j++)
        {
            int a;
            cin>>a;
            m.insert(a);
        }
        int k;
        cin>>k;
        for(int j=0; j<k; j++)
        {
            int b;
            cin>>b;
            if(auto it=m.find(b)!=m.end()) cout<<"1"<<'\n';
            else cout<<"0"<<'\n';
        }
    }
}