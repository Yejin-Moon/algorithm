#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n;
    cin>>n;
    int cnt=-1;
    set<string> set[100005];
    int res = 0;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        if(s=="ENTER") cnt++;
        else if(set[cnt].find(s)==set[cnt].end()) 
        {
            res++;
            set[cnt].insert(s);
        }
    }
    cout<<res;
}