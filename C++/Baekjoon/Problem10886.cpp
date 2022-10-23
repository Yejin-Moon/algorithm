#include <iostream>
using namespace std;

int main()
{
    int n,res=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        res+=a;
    }
    if(res>n/2) cout<<"Junhee is cute!";
    else cout<<"Junhee is not cute!";
}