#include <iostream>
using namespace std;

int main()
{
    int f;
    bool flag=true;
    cin>>f;
    if(f==8) flag = false;
    for(int i=1; i<8; i++)
    {
        int a;
        cin>>a;
        if(flag)
        {
            if(a!=f+1) 
            {
                cout<<"mixed";
                break;
            }
            else if(i==7) cout<<"ascending";
        }
        else
        {
            if(a!=f-1) 
            {
                cout<<"mixed";
                break;
            }
            else if(i==7) cout<<"descending";
        }
        f=a;
    }
}