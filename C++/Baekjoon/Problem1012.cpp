#include <iostream>
using namespace std;

bool visited[50][50];
int map[50][50];
int N,M;

//lef up right down
int lr[4] = {-1,0,1,0};
int ud[4] = {0,1,0,-1};

void dfs(int a, int b)
{
    visited[a][b]=true;
    for(int i=0; i<4; i++)
    {
        int rud = a+ud[i];
        int rlr = b+lr[i];

        if(rlr>=M || rlr<0 || rud>=N || rud<0) continue;

        if(!visited[rud][rlr]&&map[rud][rlr]==1)
        {
            visited[rud][rlr]=true;
            dfs(rud,rlr);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int cnt=0;
        int c;
        cin>>N>>M>>c;
        for(int j=0; j<c; j++)
        {
            int x,y;
            cin>>x>>y;
            map[x][y]=1;
        }
        for(int k=0; k<N; k++)
        {
            for(int m=0; m<M; m++)
            {
                if(!visited[k][m] && map[k][m]==1)
                {
                    visited[k][m]=true;
                    dfs(k,m);
                    cnt++;
                }
            }
        }
        for(int k=0; k<N; k++)
        {
            for(int m=0; m<M; m++)
            {
                visited[k][m]=false;
                map[k][m]=0;
            }
        }
        cout<<cnt<<'\n';
    }
}