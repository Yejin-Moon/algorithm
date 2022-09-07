#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int ans=0;
    int min = 101;
    for(int i=0; i<5; i++)
    {
        int a;
        cin>>a;
        if(a<min) min=a;
        arr[i]=a;
    }
    for(int i=min; ;i++)
    {
        int cnt=0;
        for(int j=0; j<5; j++)
        {
            if(i%arr[j]==0) cnt++;
        }
        if(cnt>=3) 
        {
            ans=i;
            break;
        }
    }
    cout<<ans;
}