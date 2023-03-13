#include <iostream>
#include <string>
#include <map>
using namespace std;

string sarr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

int main()
{
    map<string, int> s;
    int m,n;
    cin>>m>>n;
    for(int i=m; i<=n; i++)
    {
        string num="";
        if(i<10) s.insert({sarr[i],i});
        else
        {
            num+=sarr[i/10];
            num+=sarr[i%10];
            s.insert({num,i});
        }
    }
    int idx=0;
    for(auto i=s.begin();i!=s.end(); i++)
    {
        cout<<i->second<<" ";
        idx++;
        if(idx%10==0) cout<<'\n';
    }
}