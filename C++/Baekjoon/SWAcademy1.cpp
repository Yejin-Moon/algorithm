#include <iostream>
#include <set>
using namespace std;

int w;
bool visited[105][105];
int map[105][105];

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int maxval = 1;
int cnt=0;

void DFS(int x, int y, int level)
{
    for(int i=0; i<4; i++)
    {
        int rx = x+dx[i];
        int ry = y+dy[i];

        if(rx>=w || rx<0 || ry>=w || ry<0) continue;

        if(!visited[rx][ry]&&map[rx][ry]>level)
        {
            visited[rx][ry] = true;
            DFS(rx,ry,level);
        }
    }
}

int main()
{
    int T;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        maxval=1;
        cnt=0;
        cin>>w;
        set<int> s;
        for(int j=0; j<w; j++)
        {
            for(int k=0; k<w; k++)
            {
                cin>>map[j][k];
                s.insert(map[j][k]);
            }
        }
        //for(auto it=s.begin(); it!=s.end(); it++) cout<<*it<<endl;
        for(auto it=s.begin(); it!=s.end(); it++)
        {
            cnt=0;
            for(int i=0; i<w; i++)
            {
                for(int j=0; j<w; j++)
                {
                    if(!visited[i][j]&&map[i][j]>*it)
                    {
                        visited[i][j]=true;
                        DFS(i,j,*it);
                        cnt++;
                    }
                }
            }
            if(cnt>maxval) maxval=cnt;
            fill(&visited[0][0],&visited[w][w],false);
        }
        cout<<"#"<<i+1<<" "<<maxval<<'\n';
    }
}