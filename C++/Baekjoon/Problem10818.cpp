#include <iostream>
using namespace std;

int main()
{
    int min = 1000001;
    int max = -1000001;
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        int a;
        scanf("%d",&a);
        if(a>max) max=a;
        if(a<min) min=a;
    }
    printf("%d %d",min,max);
}