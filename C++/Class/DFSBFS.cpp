#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int visit[1001];
int visit2[1001];
vector<int> a[1001];

void dfs(int start)
{
	if (visit[start])
	{
		return;
	}

	visit[start] = true;
	printf("%d ", start);

	for (int i = 0; i < a[start].size(); i++)
	{
		int x = a[start][i];
		dfs(x);
	}
}

void bfs(int start) {
	queue<int> q;
	q.push(start);
	visit2[start] = true;

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		printf("%d ", x);
		for (int i = 0; i < a[x].size(); i++) {
			int y = a[x][i];
			if (!visit2[y]) {
				q.push(y);
				visit2[y] = true;
			}
		}
	}
}

int main()
{
	int N, M, S;
	scanf("%d %d %d", &N, &M, &S);

	int st, en;
	for (int i = 0; i < M; i++)
	{
		scanf("%d %d", &st, &en);
		a[st].push_back(en);
		a[en].push_back(st);
	}

	for (int i = 0; i <= N; i++)
	{
		sort(a[i].begin(), a[i].end());
	}
	dfs(S);
	printf("\n");
	bfs(S);
}