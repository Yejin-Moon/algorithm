#include <iostream>
#include <string>
using namespace std;

int smaller(int a, int b)
{
    if(a<b) return a;
    else return b;
}

int main()
{
    int zerocnt=0, onecnt=0;
    bool zeroflag = false, oneflag = false;
    string s;
    cin>>s;

    int len = s.length();
    for(int i=0; i<len; i++)
    {
        if(s[i]=='0' && zeroflag==false)
        {
            zeroflag=true;
            oneflag = false;
            zerocnt++;
        }
        else if(s[i]=='1' && oneflag==false)
        {
            oneflag=true;
            zeroflag=false;
            onecnt++;
        }
    }
    int result = smaller(zerocnt, onecnt);
    cout<<result;
}