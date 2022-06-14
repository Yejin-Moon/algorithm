#include <iostream>
using namespace std;

int max(int a, int b)
{
    return (a>=b)?a:b;
}

int n;
int cnt[9];

int main()
{
    cin>>n;
    while(n>0)
    {
        int x=n%10;
        n=n/10;

        if(x==9) cnt[6]++;
        else cnt[x]++;
    }

    cnt[6]=(cnt[6]+1)/2;

    int mcnt=0;
    for(int i=0; i<9; i++) mcnt=max(mcnt,cnt[i]);

    cout<<mcnt;
}