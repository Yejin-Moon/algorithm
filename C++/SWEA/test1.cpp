#include<iostream>
#include <queue>
#include <cstring>
using namespace std;

int n,m;
bool visited[100][100];
char map[100][100];
int cnt[100][100];
int alpha[26];
int res=1;
int biggest=0;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void init()
{
    memset(visited,false,sizeof(visited));
    memset(map,0,sizeof(map));
    memset(cnt,0,sizeof(cnt));
    memset(alpha,0,sizeof(alpha));
    res=1;
    biggest=1;  
}

void bfs(int x, int y)
{
    visited[x][y]=true;
    alpha[map[x][y]-'A']++;
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
            //if(alpha[map[rx][ry]-'A']!=0) continue;

            if(!visited[rx][ry]&&alpha[map[rx][ry]-'A']==0)
            {
                res++;
                cnt[rx][ry]=cnt[x][y]+1;
                if(cnt[rx][ry]>biggest) biggest=cnt[rx][ry];
                visited[rx][ry]=true;
                alpha[map[rx][ry]-'A']++;
                q.push(make_pair(rx,ry));
            }
        }
    }
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        init();
        cin>>n>>m;
    	char s[100];
    	for(int i=0; i<n; i++)
    	{
        	scanf("%s",s);
        	for(int j=0; j<m; j++)
        	{
            	map[i][j]=s[j];
        	}
    	}
    	bfs(0,0);
        printf("#%d %d\n",test_case,res);
	}
	return 0;
}