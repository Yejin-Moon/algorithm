#include <iostream>
using namespace std;

int main()
{
    int A,B,N;
    cin>>A>>B>>N;

    int ans=0;
    if(A%B==0)
    {
        cout<<0;
        return 0;
    }
    if(A>B) A=A%B;
    for(int i=0; i<N; i++)
    {
        A*=10;
        ans=(int)(A/B);
        A=A%B;
    }
    cout<<ans;
}