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

bool visited[11][11];
int rmap[11][11];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int cnt=0;

void bfs_init(int map_size, int map[10][10]) {
    for(int i=0; i<map_size; i++)
    {
        for(int j=0; j<map_size; j++)
        {
            rmap[i+1][j+1] = map[i][j];
        }
    }
}

void init()
{
    for(int i=0; i<=10; i++)
    {
        for(int j=0; j<=10; j++)
        {
            visited[i][j]=false;
        }
    }
    cnt=0;
}
int bfs(int x1, int y1, int x2, int y2) {
    visited[x1][y1]=true;
    for(int i=0; i<4; i++)
    {
        int rx = x1+dx[i];
        int ry = y1+dy[i];
        if(rx>10 || rx<1 || ry>10 || ry<1) continue;
        if(!visited[rx][ry]&&rmap[rx][ry]==0)
        {
            cnt++;
            //visited[rx][ry]=true;
            if(rx==x2 && ry==y2)
            {
                int rcnt=cnt;
                init();
                return rcnt;
            }
            bfs(rx,ry,x2,y2);
        }
    }
    return -1;
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

	printf("#total score : %d\n", test_bfs());

	return 0;
}