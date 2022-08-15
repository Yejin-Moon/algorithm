#include <iostream>
#include <map>
#include <string>
using namespace std;
int arr[1001];

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        m.insert({s,i});
    }
    int idx=0, cnt=0;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        while(arr[idx]!=0 && idx<n) idx++;
        arr[m[s]]=1;
        if(m[s]!=idx) cnt++;
        else idx++;
    }
    cout<<cnt;
}