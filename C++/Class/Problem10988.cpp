#include <iostream>
#include <string>
using namespace std;

int main()
{
    int flag = 1;
    string s;
    getline(cin,s);

    int len = s.length();

    for(int i=0; i<len/2; i++)
    {
        if(s[i]!=s[len-1-i])
        {
            flag=0;
            break;
        }
    }
    cout<<flag<<endl;
    return 0;
}