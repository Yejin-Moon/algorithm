#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

extern void bfs_init(int N, int map[10][10]);
extern int bfs(int x1, int y1, int x2, int y2);

static int test_bfs() {
	int N;
	int map[10][10];
	scanf("%d", &N);
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			scanf("%d", &map[i][j]);
		}
	}
	bfs_init(N, map);
	int M;
	int score = 100;
	scanf("%d", &M);
	for (int i = 0; i < M; ++i) {
		int x1, y1, x2, y2;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		int result = bfs(x1, y1, x2, y2);
        printf("%d ",result);
		int dist;
		scanf("%d", &dist);
		if (result != dist) score = 0;
	}
	return score;
}

bool visit[11][11];
int rmap[11][11];
int dy[4] = {1,0,-1,0};
int dx[4] = {0,1,0,-1};
int cnt=0;
int msize;
int rcnt;
int res=-1;

void bfs_init(int map_size, int map[10][10]) {
    for(int i=0; i<map_size; i++)
    {
        for(int j=0; j<map_size; j++)
        {
            rmap[i+1][j+1] = map[i][j];
            visit[i+1][j+1]=false;
        }
    }
    msize = map_size;
}

void binit()
{
    for(int i=1; i<11; i++)
    {
        for(int j=1; j<11; j++)
        {
            visit[i][j]=false;
        }
    }
    cnt=0;
}
int bfs(int x1, int y1, int x2, int y2) {
    visit[y1][x1]=true;
	cnt++;
    for(int i=0; i<4; i++)
    {
        int rx = x1+dx[i];
        int ry = y1+dy[i];
		//printf("rx is : %d, ry is : %d\n",rx,ry);
		
		/*
		if(res==-1 && rx==x2 && ry==y2) 
		{
			printf("TTes %d",cnt);
			res=cnt;
			return res;
		}
		*/
        if(rx>10 || rx<1 || ry>10 || ry<1) continue;
		//printf("visited : %d, rmap: %d\n",visit[rx][ry],rmap[rx][ry]);
        if(!visit[ry][rx]&&rmap[ry][rx]==0)
        {
			printf("rx is : %d, ry is : %d\n",rx,ry);
			//printf("x2y2: %d %d\n",x2,y2);
            //cnt++;
            //visit[rx][ry]=true;
            if(rx==x2 && ry==y2)
            {
                //rcnt=cnt;
				printf("\nrecnt is : %d ",cnt);
                //binit();
				//break;
				if(res==-1) res=cnt;
                return cnt;
            }
            else bfs(rx,ry,x2,y2);
        }
    }
    return res;
}

/*
int x[11], y[11], dist[110];
int rmap[11][11], cnt=0;
void push(int xx, int yy, int di)
{
 	x[cnt]=xx;
    y[cnt]=yy;
    dist[cnt]=di;
    cnt++;
}

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

void bfs_init(int map_size, int map[10][10]) {
    for(int i=0; i<map_size; i++)
    {
        for(int j=0; j<map_size; j++)
        {
            rmap[i+1][j+1] = map[i][j];
        }
    }
}
int bfs(int x1, int y1, int x2, int y2) {
    int pos;
    x[x1]=0;
    y[y1]=0;
    dist[0]=1;
    pos=0;
    cnt=1;
    
    while(pos<cnt && (x[pos]!=x2||y[pos]!=y2))
    {
        if(y[pos]>0 && rmap[y[pos]-1][x[pos]]==0)
        {
         	push(x[pos],y[pos]-1,dist[pos]+1);   
        }
        if(x[pos]>0&&rmap[y[pos]][x[pos]-1]==0)
        {
         	push(x[pos]-1, y[pos], dist[pos]+1);   
        }
        if(y[pos]<y2&&rmap[y[pos+1]][x[pos]]==1)
        {
         	push(x[pos], y[pos]+1, dist[pos]+1);   
        }
        if(x[pos]<x2&&rmap[y[pos]][x[pos]+1]==1)
        {
         	push(x[pos]+1, y[pos], dist[pos]+1);   
        }
        pos++;
        
    }
    if(x[pos]==x2&&y[pos]==y2) return dist[pos];
    return -1;
}
*/
int main() {
	//setbuf(stdout, NULL);
    int N;
	int map[10][10];
	scanf("%d", &N);
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			scanf("%d", &map[i][j]);
		}
	}
	bfs_init(N, map);
	int M;
	int score = 100;
	
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		int x1, y1, x2, y2;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		int result = bfs(x1, y1, x2, y2);
        printf("%d ",result);
		int dist;
		scanf("%d", &dist);
		if (result != dist) score = 0;
	}

	printf("#total score : %d\n", score);
	
	return 0;
}