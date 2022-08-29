#include<iostream>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;
char map[301][301];
bool visited[301][301];
int dx[8]={0,0,-1,1,-1,1,-1,1};
int dy[8]={-1,1,0,0,-1,1,1,-1};
int n,num=0;

bool check(int x, int y)
{
    for(int i=0; i<8; i++)
    {
        int rx = x+dx[i];
        int ry = y+dy[i];
        if(rx>=0 && rx<n && ry>=0 && ry<n) 
        {
            if(map[rx][ry]=='*') return false;
        }
    }
    return true;
}

void bfs()
{
 	for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
         	if(!visited[i][j] && map[i][j]=='.' && check(i,j))
            {
                num++;
                queue<pair<int,int>> q;
                q.push(make_pair(i,j));
                
                while(!q.empty())
                {
                    int x = q.front().first;
                    int y = q.front().second;
                    visited[x][y] = true;
                    q.pop();
                    
                    for(int k=0; k<8; k++)
                    {
                        int rx = x+dx[k];
                        int ry = y+dy[k];
                        if(rx>=0 && rx<n && ry>=0 && ry<n && !visited[rx][ry] && map[rx][ry]=='.')
                        {
                         	visited[rx][ry]=true;
                            if(check(rx,ry)) q.push(make_pair(rx,ry));
                        }
                    }
                }
            }
        }
    }
}

int main(int argc, char** argv)
{
	int T;
	scanf("%d",&T);
	for(int test_case = 1; test_case <= T; ++test_case)
	{
        scanf("%d",&n);
        num=0;
        string s;
        memset(visited,false,sizeof(visited));
        for(int j=0; j<n; j++)
        {
         	cin>>s;
            int len = s.length();
            for(int k=0; k<len; k++) map[j][k]=s[k];
        }
        bfs();
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
             	if(!visited[j][k] && map[j][k]=='.') num++;   
            }
        }
        printf("#%d %d\n",test_case,num);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}