#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int sum=0;
    for(int i=0; i<5; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        sum+=a;
    }
    sort(v.begin(),v.end());
    cout<<sum/5<<'\n'<<v[2];
}