#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        char c;
        cin>>c;
        if(c=='C') cnt++;
    }
    cout<<(cnt/(n-cnt+1)+(cnt%(n-cnt+1)!=0?1:0));
}