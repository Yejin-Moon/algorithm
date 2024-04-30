#include<vector>
#include<queue>
#include<tuple>
#include<iostream>
using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
bool visited[101][101];
int n,m;

int solution(vector<vector<int> > maps)
{
    int answer = -1;
    n = maps.size();
    m = maps[0].size();
    
    queue<tuple<int,int,int>> q;
    visited[0][0]=true;
    q.push({0,0,1});
    
    while(!q.empty()) {
        int curx = get<0>(q.front());
        int cury = get<1>(q.front());
        int curcnt = get<2>(q.front());
        q.pop();
        if(curx==n-1 && cury==m-1) return curcnt;
        
        for(int i=0; i<4; i++) {
            int newx = curx+dx[i];
            int newy = cury+dy[i];
            
            if(newx>=n || newx<0 || newy>=m || newy<0) continue;
            
            if(!visited[newx][newy] && maps[newx][newy]==1) {
                q.push({newx,newy,curcnt+1});
                visited[newx][newy] = true;
            }
        }
    }
    
    return answer;
}
