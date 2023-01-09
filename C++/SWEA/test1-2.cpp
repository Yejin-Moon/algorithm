#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

bool visited[21][21];
int graph[21][21];
int alpha[26];

int lr[4] = {-1,0,1,0};
int ud[4] = {0,1,0,-1};

int n,m, cnt;

void dfs(int x, int y)
{
    for(int i=0; i<4; i++)
    {
        int r = x+lr[i];
        int d = y+ud[i];

        if(r>=n || r<0 || d>=m || d<0) continue;

        if(visited[r][d]==false && alpha[graph[r][d]-'A']==0)
        {
            visited[r][d]=true;
            cnt++;
            alpha[graph[r][d]-'A']++;
            dfs(r,d);
        }
    }
}

int main()
{
    int res=0;
    cin>>n>>m;
    char str[25];
    for(int i=0; i<n; i++)
    {
        cin>>str;
        for(int j=0; j<m; j++)
        {
            graph[i][j]=str[j];
        }
    }
    vector<int> v;
    /*
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(alpha[graph[i][j]-'A']==0 && visited[i][j]==false)
            {
                visited[i][j]=true;
                alpha[graph[i][j]-'A']++;
                cnt=1;
                dfs(i,j);
                v.push_back(cnt);
                res++;
            }
        }
    }
    */
    visited[0][0]=true;
    alpha[graph[0][0]-'A']++;
    cnt=1;
    dfs(0,0);
    cout<<cnt;
    //sort(v.begin(),v.end());
    //cout<<v[res-1]<<endl;
}