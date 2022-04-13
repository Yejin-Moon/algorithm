#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(string str1, string str2)
{
    if(str1.length()<str2.length()) return true;
    else if(str1.length()==str2.length())
    {
        if(str1<str2) return true;
        else return false;
    }
    else return false;
}
int main()
{
    vector<string> v;
    int n;
    cin>>n;
    string str;

    for(int i=0; i<n; i++)
    {
        cin>>str;
        v.push_back(str);
    }
    sort(v.begin(), v.end(),compare);
    v.erase(unique(v.begin(),v.end()),v.end());
    for(string i:v)
    {
        cout<<i<<'\n';
    }
    return 0;
}