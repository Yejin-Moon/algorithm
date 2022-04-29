#include <iostream>
using namespace std;

#define MAX 8

int arr[MAX];
bool sel[MAX];

void print()
{
    for(int i=0; i< sizeof(arr)/4; i++)
    {
        if(sel[i] == true)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<'\n';
}

void DFS(int cnt, int n, int m, int idx)
{
    if(cnt == m)
    {
        print();
        return;
    }
    for(int i=idx; i<n; i++)
    {
        if(sel[i] == true) continue;
        sel[i] = true;
        
        DFS(cnt+1,n,m,i);
        sel[i] = false;
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        arr[i] = i+1;
    }
    DFS(0,n,m,0);
}