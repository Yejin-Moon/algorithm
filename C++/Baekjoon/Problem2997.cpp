#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    for(int i=0; i<3; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    if(v[1]-v[0]>v[2]-v[1]) cout<<(v[0]+v[1])/2;
    else if(v[2]-v[1]>v[1]-v[0]) cout<<(v[1]+v[2])/2;
    else cout<<v[2]+(v[2]-v[1]);
}