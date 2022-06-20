#include <iostream>
#include <queue>
using namespace std;

int n,m;
bool visited[100][100];
int map[100][100];
int cnt[100][100];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(int x, int y)
{
    visited[x][y]=true;
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++)
        {
            int rx = x+dx[i];
            int ry = y+dy[i];
            if(rx>=n || rx<0 || ry>=m || ry<0) continue;

            if(!visited[rx][ry]&&map[rx][ry]==1)
            {
                cnt[rx][ry]=cnt[x][y]+1;
                visited[rx][ry]=true;
                q.push(make_pair(rx,ry));
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    char s[100];
    for(int i=0; i<n; i++)
    {
        scanf("%s",s);
        for(int j=0; j<m; j++)
        {
            int a = s[j]-'0';
            map[i][j]=a;
        }
    }

    bfs(0,0);
    cout<<cnt[n-1][m-1]+1;
}