#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int x, int y)
{
    if(x>y) return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int a;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),compare);
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<'\n';
    }
}