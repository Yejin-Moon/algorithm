#include <iostream>
using namespace std;

int maxval(int a, int b)
{
    if(a>b) return a;
    else return b;
}

int main()
{
    int P[101][101];
    int weight[101];
    int value[101];
    int N,K;
    cin>>N>>K;
    for(int i=1; i<=N; i++)
    {
        cin>>weight[i]>>value[i];
    }

    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=K; j++)
        {
            if(weight[i]>j) P[i][j]=P[i-1][j];
            else P[i][j]=maxval(value[i]+P[i-1][j-weight[i]],P[i-1][j]);
        }
    }
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=K; j++)
        {
            cout<<P[i][j]<<' ';
        }
        cout<<endl;
    }
}