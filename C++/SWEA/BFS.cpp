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
int cnt[11][11];
int quex[100];
int quey[100];
int front, rear;

void bfs_init(int map_size, int map[10][10]) {
    for(int i=0; i<map_size; i++)
    {
        for(int j=0; j<map_size; j++)
        {
            rmap[i+1][j+1] = map[j][i];
            visit[i+1][j+1]=false;
        }
    }
}
void binit()
{
    for(int i=1; i<11; i++)
    {
        for(int j=1; j<11; j++)
        {
            visit[i][j]=false;
            cnt[i][j]=0;
        }
    }
}
int bfs(int x1, int y1, int x2, int y2) {
    front=rear=-1;
    visit[x1][y1]=true;
    rear++;
    quex[rear] = x1;
    quey[rear] = y1;

    while(front!=rear)
    {
        front++;
        int x = quex[front];
        int y = quey[front];
        for(int i=0; i<4; i++)
        {
            int rx = x+dx[i];
            int ry = y+dy[i];
		
            if(rx>10 || rx<1 || ry>10 || ry<1) continue;
		    if(!visit[rx][ry]&&rmap[rx][ry]==0)
            {
                cnt[rx][ry]=cnt[x][y]+1;
                visit[rx][ry]=true;
                rear++;
                quex[rear] = rx;
                quey[rear] = ry;
            }
        }
    }
    int res = cnt[x2][y2];
    if(cnt[x2][y2]==0) res = -1;
    binit();
    return res;
}

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
    //printf("%d %d",rmap[2][3],rmap[1][10]);
	
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