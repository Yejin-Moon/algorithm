#include <iostream>
#include <string>
#include <cstdio>
#include <map>
#include <cstdlib>
using namespace std;

string m2[100001];

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    char str[21];
    string s;
    map<string, int> m1;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        //string s = str;
        m1.insert(pair<string, int>(s,i));
        m2[i]=s;
    }

    for(int i=0; i<m; i++)
    {
        cin>>str;
        if(str[0]>='0' && str[0]<='9')
        {
            int a;
            sscanf(str,"%d",&a);
            cout<<m2[a-1]<<'\n';
        }
        else
        {
            string s2 = str;
            cout<<m1[s2]+1<<'\n';
        }
    }
    return 0;
}
