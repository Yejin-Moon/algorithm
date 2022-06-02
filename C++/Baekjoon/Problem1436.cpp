#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int cnt=0;
    int a=0;
    int tmp=0;
    while(n!=cnt)
    {
        a++;
        tmp=a;
        while(tmp!=0)
        {
            if(tmp%1000==666)
            {
                cnt++;
                break;
            }
            else tmp/=10;
        }
    }
    cout<<a;
}