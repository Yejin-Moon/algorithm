#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int len = a.length();

    char b;
    int dis = 'a'-'A';
    while(cin>>b)
    {
        for(int i=0; i<len; i++)
        {
            if(a[i]==b) 
            {
                a[i]+=dis;
                continue;
            }
        }
    }
    cout<<a;
}