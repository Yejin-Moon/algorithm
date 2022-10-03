#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while(b!=0)
    {
        int tmp = a%b;
        a=b;
        b=tmp;
    }
    return a;
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",a*b/gcd(a,b));
    }
}