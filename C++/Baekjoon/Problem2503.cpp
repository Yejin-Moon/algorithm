#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

bool maynum[1000];

typedef struct
{
    int num;
    int strike;
    int ball;
}Game;
vector<Game> v;

void init()
{
    memset(maynum,true,sizeof(maynum));
    for(int i=123; i<=999; i++)
    {
        string tmp = to_string(i);
        if(tmp[0]==tmp[1]||tmp[0]==tmp[2]||tmp[1]==tmp[2]) maynum[i]=false;
        if(tmp[0]-'0'==0 ||tmp[1]-'0'==0 ||tmp[2]- '0'==0) maynum[i]=false;
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        Game G;
        G.num=a;
        G.strike = b;
        G.ball = c;
        v.push_back(G);
    }
    init();

    for(int i=0; i<v.size(); i++)
    {
        int N = v[i].num;
        int S = v[i].strike;
        int B = v[i].ball;
        string Ori = to_string(N);
        for(int j=123; j<=999; j++)
        {
            int tS = 0;
            int tB = 0;
            if(maynum[j])
            {
                string tmp = to_string(j);
                for(int a=0; a<3; a++)
                {
                    for(int b=0; b<3; b++)
                    {
                        if(a==b&&Ori[a]==tmp[b]) tS++;
                        if(a!=b&&Ori[a]==tmp[b]) tB++;
                    }
                }
                if(S!=tS || B!= tB) maynum[j]=false;
            }
        }
    }
    int ans = 0;
    for(int i=123; i<=999; i++)
    {
        if(maynum[i]==true) ans++;
    }
    cout<<ans;
}