#include <iostream>
using namespace std;

int main()
{
    int cnt1=0;
    int cnt2=0;

    int a,b;
    cin>>a>>b;

    int cnt=0;
    int ord=0;
    for(int i=0; i<=b; i++)
    {
        for(int k=0; k<i+1; k++)
        {
            if(ord==a-1) cnt1=cnt;
            else if(ord==b) 
            {
                cnt2=cnt;
                break;
            }
            cnt+=i+1;
            ord++;
        }
    }
    cout<<cnt2-cnt1;
}