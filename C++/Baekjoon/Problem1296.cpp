#include <iostream>
#include <string>
using namespace std;

int cal(int L, int O, int V, int E)
{
    return ((L+O)*(L+V)*(L+E)*(O+V)*(O+E)*(V+E))%100;
}

int main()
{
    int small = -1;
    string ress;
    int l=0,o=0,v=0,e=0;
    string name;
    cin>>name;
    int nlen = name.length();
    for(int i=0; i<nlen; i++)
    {
        if(name[i]=='L') l++;
        else if(name[i]=='O') o++;
        else if(name[i]=='V') v++;
        else if(name[i]=='E') e++;
    }
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int sl=0,so=0,sv=0,se=0;
        string s;
        cin>>s;
        int slen = s.length();
        for(int j=0; j<slen; j++)
        {
            if(s[j]=='L') sl++;
            else if(s[j]=='O') so++;
            else if(s[j]=='V') sv++;
            else if(s[j]=='E') se++;
        }
        sl+=l;
        so+=o;
        sv+=v;
        se+=e;
        int res = cal(sl,so,sv,se);
        if(res>small)
        {
            small=res;
            ress=s;
        }
        else if(res==small&&s.compare(ress)<0) ress=s;
    }
    cout<<ress;
}