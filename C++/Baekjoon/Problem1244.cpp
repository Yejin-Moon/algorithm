#include <iostream>
using namespace std;
bool arr[100];

void change(int index)
{
    if(arr[index]==true) arr[index]=false;
    else arr[index] = true;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        arr[i]=a;
    }
    int mem;
    cin>>mem;
    for(int i=0; i<mem; i++)
    {
        int a,b;
        cin>>a>>b;
        if(a==1)
        {
            for(int j=b; j<=n; j++)
            {
                if(j%b==0) change(j-1);
            }
        }
        else
        {
            change(b-1);
            int left = b-2; //(b-1)-1
            int right = b; //(b-1)+1
            while(1)
            {
                if(left<0 || right>=n) break;
                if(arr[left]==arr[right])
                {
                    change(left);
                    change(right);
                }
                else break;
                left--;
                right++;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(i!=0 && i%20==0) cout<<'\n';
        cout<<arr[i]<<" ";
    }
}