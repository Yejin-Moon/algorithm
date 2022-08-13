#include <set>
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    set<int> s;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    for(int i=0; i<m; i++)
    {
        int b;
        cin>>b;
        if(s.find(b)!=s.end())
        {
            s.erase(b);
        }
    }
    if(s.size()==0) printf("0");
    else
    {
        cout<<s.size()<<'\n';
        for(auto it = s.begin(); it!=s.end(); it++)
        {
            cout<<*it<<' ';
        }
    }
}