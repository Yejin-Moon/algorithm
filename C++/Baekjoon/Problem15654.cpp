#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 8

int arr[MAX];
bool sel[MAX];
vector<int> v;

void print()
{
    for(int i=0; i< v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<'\n';
}

void DFS(int cnt, int n, int m)
{
    if(cnt == m)
    {
        print();
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(sel[i] == true) continue;
        sel[i] = true;
        v.push_back(arr[i]);
        DFS(cnt+1,n,m);
        v.pop_back();
        sel[i] = false;
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    int a;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        arr[i] = a;
    }
    sort(arr,arr+n);
    DFS(0,n,m);
}