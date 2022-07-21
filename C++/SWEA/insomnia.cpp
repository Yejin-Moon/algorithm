#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int test=1; test<=T; test++)
    {
        int n;
        cin>>n;

        int rbit = 0, bit = 1, num, i;

        for(i=1 ;; i++)
        {
            num=n*i;
            while(num>0)
            {
                bit=1;
                bit=bit<<(num%10);
                rbit=rbit|bit;
                num/=10;
            }
            if(rbit==1023) break;
        }
        cout<<"#"<<test<<" "<<i*n<<endl;
    }

    /*
    int bit=1;
    int rbit=1;
    for(int i=0; i<10; i++)
    {
        bit=bit<<1;
        printf("%d ",bit);
        rbit=rbit|bit;
        printf("%d ",rbit);
        cout<<endl;
    }
    cout<<rbit;
    */
}