#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    vector<int> v;
    int arr[100001];
    int sum_arr[100001]={0,};
    int ans=0;
    for(int i=0; i<n; i++)
    {
        int a;
        scanf("%d",&a);
        arr[i]=a;
        ans+=a;
        sum_arr[i+1]=ans;
    }
    for(int i=0; i<m; i++)
    {
        int q,w;
        scanf("%d %d",&q,&w);
        //int res=0;
        printf("%d\n",sum_arr[w]-sum_arr[q-1]);
    }
}