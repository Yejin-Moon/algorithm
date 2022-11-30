#include <iostream>
using namespace std;

int main()
{
    int L,A,B,C,D;
    cin>>L>>A>>B>>C>>D;
    int korean,math;

    korean = A/C;
    if(A%C!=0) korean++;
    math = B/D;
    if(B%D!=0) math++;

    if(korean>math) cout<<L-korean;
    else cout<<L-math;
}