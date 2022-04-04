#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int32_t a,b;
    int temp;

    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        temp = 1;

        for(int j=0;j<b;j++)
        {
            temp=(temp*a)%10;
        }
        
        if(temp==0) temp=10;
        cout<<temp<<endl;
    }
    return 0;
}