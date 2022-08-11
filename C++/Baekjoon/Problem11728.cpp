#include <iostream>
using namespace std;

int arrA[1000001];
int arrB[1000001];

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arrA[i]);
    }
    for(int i=0; i<m; i++)
    {
        scanf("%d",&arrB[i]);
    }
    int aidx = 0;
    int bidx = 0;
    while(aidx<n && bidx<m)
    {
        if(arrA[aidx]>arrB[bidx])
        {
            printf("%d ",arrB[bidx++]);
        }
        else
        {
            printf("%d ",arrA[aidx++]);
        }
    }
    while(aidx<n)
    {
        printf("%d ",arrA[aidx++]);
    }
    while(bidx<m)
    {
        printf("%d ",arrB[bidx++]);
    }
}