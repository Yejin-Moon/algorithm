#include <iostream>
using namespace std;

int main()
{
    int small=100;
    int sum=0;
    for(int i=0; i<7; i++)
    {
        int a;
        scanf("%d",&a);
        if(a%2==1)
        {
            if(a<small) small = a;
            sum+=a;
        }
    }
    if(sum==0) printf("-1");
    else printf("%d\n%d",sum,small);
}