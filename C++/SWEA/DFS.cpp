#include <iostream>
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
using namespace std;

static unsigned int seed = 12345;
static unsigned int pseudo_rand(int max) {
	seed = ((unsigned long long)seed * 1103515245 + 12345) & 0x7FFFFFFF;
	return seed % max;
}

#define MAX_N (40)
#define MAX_K (98)
#define MIN_N (2)
#define MAX_CHILD (5)

extern void dfs_init(int N, int path[MAX_N][2]);
extern int dfs(int k);

static int p[MAX_K+2];
static int c[MAX_K+2];
static int path[MAX_N][2];
static void makeTree(int n) {
	for (int i = 1; i < MAX_K+2; ++i) {
		p[i] = c[i] = -1;
	}
	c[pseudo_rand(MAX_K + 1) + 1] = 0;
	for (int i = 0; i < n; ++i) {
		int pi = pseudo_rand(MAX_K + 1) + 1;
		while (c[pi] < 0 || c[pi] >= MAX_CHILD) {
			++pi;
			if (pi == MAX_K + 2)
				pi = 1;
		}
		int ci = pseudo_rand(MAX_K + 1) + 1;
		while (c[ci] >= 0) {
			++ci;
			if (ci == MAX_K + 2)
				ci = 1;
		}
		p[ci] = pi;
		++c[pi];
		c[ci] = 0;
	}
	bool check[MAX_K + 2] = { false };
	for (int i = 0; i < n; ++i) {
		int e = pseudo_rand(MAX_K + 1) + 1;
		while (check[e] || c[e] < 0 || p[e] == -1) {
			++e;
			if (e == MAX_K + 2)
				e = 1;
		}
		check[e] = true;
		path[i][0] = p[e];
        cout<<"path "<<i<<" 0 - "<<path[i][0]<<'\n';
		path[i][1] = e;
        cout<<"path "<<i<<" 1 - "<<path[i][1]<<'\n';
	}
}

int top=-1;
int rn;
int stack[100];
bool visited[100];
int rpath[100][2];
void dfs_init(int N, int path[100][2])
{
    rn=N;
    for(int i=0; i<N; i++)
    {
        rpath[i][0]=path[i][0];
        rpath[i][1]=path[i][1];
    }
    for(int i=0; i<N; i++)
    {
        visited[i]=false;
    }
    //int stack[N];
    top=-1;
}

int dfs(int n)
{
    stack[++top]=n;
    while(top!=-1)
    {
        //cout<<top<<endl;
        int cur = stack[top--];
        //cout<<"top is :"<<cur<<endl;
        if(!visited[cur])
        {
            //cout<<cur<<' ';
            visited[cur]=true;
            if(cur>n) 
            {
                cout<<"tes";
                return cur;
            }
            for(int next=0; next<2; next++)
            {
                if(!visited[rpath[next][1]] && rpath[next][1]) 
                {
                    top++;
                    stack[top] = rpath[next][1];
                    cout<<stack[top]<<endl;
                    //break;
                }
            }
        }
    }
	return -1;
}

int main() {
	setbuf(stdout, NULL);
	int T;
	//freopen("dfs_input.txt", "r", stdin);
	scanf("%d", &T);

	int totalScore = 0;
	for (int tc = 1; tc <= T; tc++) {
		int n, q;

		scanf("%d %d %d", &n, &q, &seed);

		makeTree(n - 1);
		dfs_init(n, path);

		bool check[MAX_K + 2] = { false };
		int score = 100;
		for (int i = 0; i < q; ++i) {
			int k, ret, correct;

			scanf("%d", &k);

			ret = dfs(k);
            printf("result is %d\n",ret);
			scanf("%d", &correct);

			if (ret != correct)
				score = 0;
		}
		printf("#%d : %d\n", tc, score);
		totalScore += score;
	}
	printf("#total score : %d\n", totalScore / T);

	return 0;
}