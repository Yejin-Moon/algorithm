#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int numsum(string s)
{
    int len =s.length();
    int sum=0;
    for(int i=0; i<len; i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            sum+=s[i]-'0';
        }
    }
    return sum;
}

bool comp(string s1, string s2)
{
    if(s1.length()<s2.length()) return true;
    else if(s1.length()==s2.length())
    {
        if(numsum(s1)<numsum(s2)) return true;
        else if(numsum(s1)==numsum(s2))
        {
            if(s1.compare(s2)<0) return true;
            else return false;
        }
        else return false;
    }
    else return false;
}

int main()
{
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<'\n';
    }
}