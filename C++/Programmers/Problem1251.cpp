#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string str;
    cin>>str;
    set<string> s;
    int len=str.length();

    for(int i=0; i<len-2; i++)
    {
        for(int j=i+1; j<len-1; j++)
        {
            string tmp;
            for(int k=i; k>=0; k--) tmp+=str[k];
            for(int k=j; k>i; k--) tmp+=str[k];
            for(int k=len-1;k>j;k--) tmp+=str[k];
            s.insert(tmp);
        }
    }
    auto iter = s.begin();
    cout<<*iter;
}