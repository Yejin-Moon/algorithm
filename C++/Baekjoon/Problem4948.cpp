#include <iostream>
using namespace std;

bool arr[123456*2];

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0) break;

        for(int i=0; i<=2*n; i++)
        {
            arr[i]=0;
        }

        int cnt=0;
        for(int i=2; i<=2*n; i++)
        {
            if(arr[i]==0) arr[i]=0;
            for(int j=i+i; j<=2*n; j+=i)
            {
                if(arr[j]!=1) arr[j]=1;
            }
        }
        for(int i=n+1; i<=2*n; i++)
        {
            if(arr[i]==0) cnt++;
        }
        cout<<cnt<<'\n';
    }
}