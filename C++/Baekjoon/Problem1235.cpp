#include <iostream>
#include <string>
#include <set>
using namespace std;
string arr[1000];

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        arr[i]=s;
    }
    int len=arr[0].length();
    for(int i=1;i<=len;i++)
    {
        set <string> se;
        bool flag=true;
        for(int j=0; j<n; j++)
        {
            string tmp = arr[j].substr(len-i,i);
            if(se.find(tmp)!=se.end()) 
            {
                flag=false;
                break;
            }
            else se.insert(tmp);
        }
        if(flag) 
        {
            cout<<i;
            break;
        }
    }
}