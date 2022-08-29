#include <iostream>
#include <string>
#include <queue>
#include <cstring>
using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int map[100][100];
int dp[100][100];
bool visited[100][100];
int N,res;

int bfs()
{
    queue <pair<int,int>> q;
    visited[0][0]=true;
    dp[0][0]=0;
    q.push(make_pair(0,0));

    while(!q.empty())
    {
        int x= q.front().first;
        int y = q.front().second;

        q.pop();
        for(int k=0; k<4; k++)
        {
            int rx = x+dx[k];
            int ry = y+dy[k];

            if(rx>=0 && rx<N && ry>=0 && ry<N)
            {
                if(visited[rx][ry]==false || dp[rx][ry]>dp[x][y]+map[rx][ry])
                {
                    visited[rx][ry]=true;
                    dp[rx][ry] = dp[x][y] + map[rx][ry];

                    q.push(make_pair(rx,ry));
                }
            }
        }
    }
    return dp[N-1][N-1];
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	scanf("%d",&T);
	for(test_case = 1; test_case <= T; ++test_case)
	{
        memset(map,0,sizeof(map));
        memset(dp,0,sizeof(dp));
        memset(visited,false,sizeof(visited));
        scanf("%d",&N);
        
        for(int i=0; i<N; i++)
        {
            string s;
            cin>>s;
            for(int j=0; j<N; j++)
            {
                map[i][j]=s[j]-'0';
            }
        }
        res = bfs();
        printf("#%d %d\n",test_case,res);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}