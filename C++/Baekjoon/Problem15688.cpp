#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n,ele;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ele);
        v.push_back(ele);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++)
    {
        printf("%d\n",v[i]);
    }
}