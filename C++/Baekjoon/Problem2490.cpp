#include <iostream>
using namespace std;
char arr[4] = {'A','B','C','D'};
int main()
{
    for(int i=0; i<3; i++)
    {
        int sum=3;
        for(int a=0; a<4; a++)
        {
            int m;
            cin>>m;
            sum-=m;
        }
        if(sum<0) cout<<"E\n";
        else cout<<arr[sum]<<'\n';
    }
}