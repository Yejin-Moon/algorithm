#include <iostream>
using namespace std;

int main()
{
    float A,B,C,D;
    cin>>A>>B>>C>>D;

    float maxval=A/C+B/D;
    int maxcnt=0;
    if(C/D+A/B>maxval)
    {
        maxval = C/D+A/B;
        maxcnt=1;
    }
    if(D/B+C/A>maxval)
    {
        maxval = D/B+C/A;
        maxcnt=2;
    }
    if(B/A+D/C>maxval)
    {
        maxval = B/A+D/C;
        maxcnt=3;
    }
    cout<<maxcnt;
}