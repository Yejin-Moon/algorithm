#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        long cnt=0;
        int* arr = new int[a];
        for(int j=0; j<a; j++)
        {
            int b;
            cin>>b;
            arr[j]=b;
        }
        for(int j=0; j<a; j++)
        {
            for(int k=j+1; k<a; k++)
            {
                cnt+=gcd(arr[j],arr[k]);
            }
        }
        cout<<cnt<<'\n';
    }
}

int gcd(int a, int b)
{
    int n;
    if(a<b) swap(a,b);
    while(b!=0)
    {
        n=a%b;
        a=b;
        b=n;
    }
    return a;
}