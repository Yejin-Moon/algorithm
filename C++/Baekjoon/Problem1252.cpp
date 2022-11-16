#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int res = 0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='0') res++;
        else break;
    }
    
}