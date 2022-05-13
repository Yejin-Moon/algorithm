#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    multimap<long,int> m1;

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        long a;
        cin>>a;
        if(a==0 && !m1.empty()) 
        {
            cout<<m1.begin()->first<<'\n'; 
            m1.erase(m1.begin());
        }
        else if(a==0 && m1.empty()) cout<<"0"<<'\n';
        else m1.insert({a,i});
    }
}