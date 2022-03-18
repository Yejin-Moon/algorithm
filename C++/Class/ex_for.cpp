#include <iostream>
using namespace std;

int main()
{
    int check1[7];
    int check2[7];
    for(int i=1; i<=7; ++i)
    {
        check1[i]=i;
        cout<<i<<'-'<<check1[i]<<endl;
    }
    cout<<endl;
    for(int j=1; j<=7; j++)
    {
        check2[j]=j;
        cout<<j<<'-'<<check2[j]<<endl;
    }
}