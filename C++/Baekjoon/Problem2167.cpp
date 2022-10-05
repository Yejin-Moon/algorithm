#include <iostream>
using namespace std;

int arr[302][302];

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            scanf("%d",&arr[i][j]);
            arr[i][j]+=arr[i][j-1]+arr[i-1][j]-arr[i-1][j-1];
        }
    }
    int k;
    scanf("%d",&k);
    for(int i=0; i<k; i++)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        printf("%d\n",arr[c][d]-arr[a-1][d]-arr[c][b-1]+arr[a-1][b-1]);
    }
}