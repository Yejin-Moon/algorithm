#include <iostream>
using namespace std;

int w,h;
bool visited[50][50];
int map[50][50];

int dx[8] = {0,1,0,-1,1,1,-1,-1};
int dy[8] = {-1,0,1,0,-1,1,1,-1};

void dfs(int x, int y)
{
    for(int i=0; i<8; i++)
    {
        int rx = x+dx[i];
        int ry = y+dy[i];

        if(rx>=h || rx<0 || ry>=w || ry<0) continue;

        if(!visited[rx][ry]&&map[rx][ry]==1)
        {
            visited[rx][ry]=true;
            dfs(rx,ry);
        }
    }
}

int main()
{
    while(1)
    {
        int cnt=0;
        cin>>w>>h;
        if(w==0 && h==0) break;
        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                int a;
                cin>>a;
                map[i][j]=a;
            }
        }

        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                if(!visited[i][j]&&map[i][j]==1)
                {
                    visited[i][j];
                    dfs(i,j);
                    cnt++;
                }
            }
        }

        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                visited[i][j]= false;
                map[i][j]=0;
            }
        }
        cout<<cnt<<'\n';
    }
}