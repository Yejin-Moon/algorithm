#include <iostream>
#include <vector>
using namespace std;
vector<int> prime;
int arr[10001];

void primefun()
{
    for(int i=2; i*i <10001; i++)
    {
        if(arr[i]) continue;
        for(int j=i+i; j<10001; j+=i) arr[j]=1;
    }
    for(int i=2; i<10001; i++) if(!arr[i]) prime.push_back(i);
}

int main()
{
    primefun();
    int n;
    cin>>n;
    int sz = prime.size();
    for(int i=0; i<sz-1; i++)
    {
        if(prime[i]*prime[i+1]>n)
        {
            cout<<prime[i]*prime[i+1];
            break;
        }
    }
}