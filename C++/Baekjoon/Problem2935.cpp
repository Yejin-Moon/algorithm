#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A,B;
    char c;
    cin>>A>>c>>B;
    int biglen=A.length();
    int smalllen=B.length();
    if(biglen<smalllen) swap(biglen, smalllen);
    if(c=='+' && (biglen==smalllen))
    {
        cout<<"2";
    }
    else cout<<"1";
    if(c=='*')
    {
        for(int i=0; i<biglen+smalllen-2;i++) cout<<"0";
    }
    else
    {
        int dis = biglen-smalllen-1;
        for(int i=0; i<biglen-1; i++)
        {
            if(i==dis) cout<<"1";
            else cout<<"0";
        }
    }
}