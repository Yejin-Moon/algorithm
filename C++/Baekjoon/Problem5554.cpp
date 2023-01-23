#include <iostream>
using namespace std;

int main()
{
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    int res = A+B+C+D;
    cout<<res/60<<'\n'<<res%60;
}