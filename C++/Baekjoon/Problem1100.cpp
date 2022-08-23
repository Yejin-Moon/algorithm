#include <iostream>
#include <string>
using namespace std;

int main()
{
    int res = 0;
    for(int i=0; i<8; i++)
    {
        string s;
        cin>>s;
        if(i%2==0)
        {
            for(int j=0; j<7; j+=2)
            {
                if(s[j]=='F') res++;
            }
        }
        else
        {
            for(int j=1; j<8; j+=2)
            {
                if(s[j]=='F') res++;
            }
        }
    }
    cout<<res;
}