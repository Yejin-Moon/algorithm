#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 8

int arr[MAX];
bool sel[MAX];
vector<int> v;
int num=0;

void print()
{
    for(int i=0; i< v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<'\n';
}

void DFS(int cnt, int n, int m, int num)
{
    if(cnt == m)
    {
        print();
        return;
    }
    for(int i=num; i<n; i++)
    {
        if(sel[i]==true) continue;
        sel[i] = true;
        v.push_back(arr[i]);
        DFS(cnt+1,n,m,i);
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
    DFS(0,n,m,num);
}