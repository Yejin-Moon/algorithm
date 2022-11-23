#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2;
    for(int i=0; i<10; i++)
    {
        int a;
        cin>>a;
        v1.push_back(a);
    }
    for(int i=0; i<10; i++)
    {
        int b;
        cin>>b;
        v2.push_back(b);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    cout<<v1[9]+v1[8]+v1[7]<<' ';
    cout<<v2[9]+v2[8]+v2[7];
}