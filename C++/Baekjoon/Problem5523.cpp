#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0, b=0;
    for(int i=0; i<n; i++)
    {
        int sa,sb;
        cin>>sa>>sb;
        if(sa>sb) a++;
        else if(sb>sa) b++;
    }
    cout<<a<<" "<<b;
}