#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        for(int j=0; j<b; j++)
        {
            int c,d;
            cin>>c>>d;
            a+=(c*d);
        }
        cout<<a<<'\n';
    }
}