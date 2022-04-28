#include <iostream>
#include <vector>
using namespace std;

#define MAX 5

int arr[MAX];
bool select[MAX];
vector<int> v;

void print()
{
    for(int i=0; i< v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<'\n';
}

void DFS(int cnt)
{
    if(cnt == 3)
    {
        print();
        return;
    }
    for(int i=0; i<MAX; i++)
    {
        if(select[i] == true) continue;
        select[i] = true;
        v.push_back(arr[i]);
        DFS(cnt+1);
        v.pop_back();
        select[i] = false;
    }
}

int main()
{
    for(int i=0; i<MAX; i++)
    {
        arr[i] = i+1;
    }
    DFS(0);
}