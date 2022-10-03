#include <iostream>
#include <string>
using namespace std;
int tmp[50][4];

int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    string res;

    for(int i=0; i<n; i++)
    {
        string dna;
        cin>>dna;
        for(int j=0; j<m; j++)
        {
            if(dna[j]=='A') tmp[j][0]++;
            else if(dna[j]=='C') tmp[j][1]++;
            else if(dna[j]=='G') tmp[j][2]++;
            else if(dna[j]=='T') tmp[j][3]++;
        }
    }

    for(int i=0; i<m; i++)
    {
        int max=0,idx=0;
        for(int j=0; j<4; j++)
        {
            if(tmp[i][j]>max)
            {
                max=tmp[i][j];
                idx=j;
            }
        }
        cnt+=n-max;
        if(idx==0) res+='A';
        else if(idx==1) res+='C';
        else if(idx==2) res+='G';
        else if(idx==3) res+='T';
    }
    cout<<res<<'\n';
    cout<<cnt<<'\n';
}