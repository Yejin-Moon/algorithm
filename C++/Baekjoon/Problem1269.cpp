#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n,m;
    cin>>n>>m;

    map<int,int> m1;
    int cnt=0;

    for(int i=0; i<n+m; i++)
    {
        int a;
        cin>>a;
        if(m1.find(a)!=m1.end()) cnt++;
        else m1.insert({a,1});
    }
    cout<<n+m-(cnt*2);
}