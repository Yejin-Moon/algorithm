#include <iostream>
using namespace std;

int main()
{
    int res=0;
    int arr[10];
    for(int i=0; i<10; i++)
    {
        bool flag=false;
        int n;
        scanf("%d",&n);
        int tmp = n%42;
        arr[i]=tmp;
        for(int j=0; j<i; j++)
        {
            if(arr[j]==tmp) 
            {
                flag=true;
                break;
            }
        }
        if(!flag) res++;
    }
    cout<<res;
}