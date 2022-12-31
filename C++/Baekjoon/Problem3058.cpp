#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int small=101;
        int sum=0;
        for(int j=0; j<7; j++)
        {
            int a;
            cin>>a;
            if(a%2==0)
            {
                sum+=a;
                if(a<small) small=a;
            }
        }
        cout<<sum<<" "<<small<<'\n';
    }
}