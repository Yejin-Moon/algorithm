#include <iostream>
#include <string>
using namespace std;

int main()
{
    while(1)
    {
        string str;
        getline(cin,str);
        if(str=="***") break;
        int len = str.length();
        for(int i=len-1; i>=0; i--)
        {
            cout<<str[i];
        }
        cout<<'\n';
    }
}