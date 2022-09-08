#include <iostream>
using namespace std;

int main()
{
    int N,F;
    cin>>N>>F;

    int tmp=N;
    int one = tmp%10;
    tmp/=10;
    int ten = tmp%10;
    N-=((ten*10)+one);
    int res=0;
    for(int i=0; i<100; i++)
    {
        if((N+i)%F==0)
        {
            res=i;
            break;
        }
    }

    if(res<10) cout<<0<<res;
    else cout<<res;
}