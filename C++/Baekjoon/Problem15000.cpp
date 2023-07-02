#include <iostream>
#include <string>
using namespace std;

int main()
{
    int dis = 'a'-'A';
    string str;
    string res = "";
    cin>>str;

    int len = str.length();
    for(int i=0; i<len; i++) {
        res+=(str[i]-dis);
    }
    cout<<res;
}