#include <iostream>
#include <vector>
using namespace std;

int ab(int a)
{
    if(a<0) return -a;
    else return a;
}
int main()
{
    vector<int> v;
    for(int i=0; i<4; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int res = (v[3]+v[0])-(v[2]+v[1]);
    cout<<ab(res);
}