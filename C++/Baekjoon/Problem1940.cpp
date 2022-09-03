#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    vector<int> v;
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++)
    {
        int a;
        scanf("%d",&a);
        v.push_back(a);
    }
    int cnt=0;
    sort(v.begin(),v.end());
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(v[i]+v[j]==m) cnt++;
            else if(v[i]+v[j]>m) break;
        }
    }
    printf("%d",cnt);
}