#include <iostream>
using namespace std;
int cnt1=0, cnt2=0;

int fibo(int n)
{
    if(n==0) 
    {
        cout<<"0"<<'\n';
        cnt1++;
        return 0;
    }
    if(n==1) 
    {
        cout<<"1"<<'\n';
        cnt2++;
        return 1;
    }
    else return fibo(n-1)+fibo(n-2);
}

class Fibo
{
public:
    int zero;
    int one;
};

int main()
{
    int n;
    cin>>n;
    int zero[41];
    int one[41];
    zero[0] = 1;
    zero[1] = 0;
    one[0] = 0;
    one[1] = 1;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a!=0 || a!=1)
        {
            for(int j=2; j<=a; j++)
            {
                zero[j] = zero[j-1]+zero[j-2];
                one[j] = one[j-1]+one[j-2];
            }
        }
        cout<<zero[a]<<" "<<one[a]<<'\n';
    }
}