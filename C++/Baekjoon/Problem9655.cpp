#include <iostream>
using namespace std;
bool flag = false;

void flip(bool f)
{
    if(f) flag=false;
    else flag=true;
}

int main()
{
    int n;
    cin>>n;
    while(1)
    {
        if(n>=3)
        {
            n-=3;
            if(n==0) break;
            flip(flag);
        }
        else if(n<3)
        {
            n-=1;
            if(n==0) break;
            flip(flag);
        }
    }
    if(flag) cout<<"CY";
    else cout<<"SK";
}