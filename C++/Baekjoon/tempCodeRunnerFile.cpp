#include <iostream>
using namespace std;
int arr[10001];

int main()
{
    int y=0,m=0;
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]%30!=0) y+=((arr[i]/30))+1;
        else y+=(arr[i]/30);
        if(arr[i]%60!=0) m+=((arr[i]/60))+1;
        else m+=(arr[i]/60);
    }
    y=y*10;
    m=m*15;
    if(y==m) printf("Y M %d",y);
    else if(y>m) printf("M %d",m);
    else printf("Y %d",y);
}