#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int num=n*m;

    for(int i=0; i<5; i++)
    {
        int a;
        cin>>a;
        cout<<a-num<<" ";
    }
}