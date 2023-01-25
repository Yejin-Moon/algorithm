#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin>>n;
    int res=0;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(s.find(a)!=s.end()) res++;
        else s.insert(a);
    }
    cout<<res;
}