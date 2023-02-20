#include <iostream>
using namespace std;

int main()
{
    float n;
    cin>>n;
    float aver=0, ex=0;
    for(int i=0; i<n; i++)
    {
        float a;
        cin>>a;
        aver+=a;
        ex+=(a*(1/n));
    }
    if(n==0 || ex==0) cout<<"divide by zero";
    else printf("%.2f",(aver/n)/ex);
}