#include <iostream>
using namespace std;

int main()
{
    while(1)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>=c)
        {
            swap(a,c);
            if(b>=c) swap(b,c);
        }
        if(b>=c)
        {
            swap(b,c);
            if(a>=c) swap(a,c);
        }
        if(a==0 && b==0 && c==0) break;
        if((a*a + b*b) == c*c ) cout<<"right"<<'\n';
        else cout<<"wrong"<<'\n';
    }
    return 0;
}