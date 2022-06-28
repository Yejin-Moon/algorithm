#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    set <string> set1;
    int len = s.length();
    int l=1;
    for(int i=1; i<=len; i++)
    {
        for(int j=0; j<len; j++)
        {
            if(j+i>len) break;
            string str = s.substr(j,i);
            set1.insert(str);
        }
    }
    cout<<set1.size();
}