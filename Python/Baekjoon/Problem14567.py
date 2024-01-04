N, M = map(int, input().split())
graph = [[] for i in range(N + 1)]
indegree = [0 for i in range(N + 1)]
dp = [0 for i in range(N + 1)]
queue = []

for i in range(M):
    a, b = map(int, input().split())
    graph[a].append(b)
    indegree[b] += 1

for i in range(1, N + 1):
    if indegree[i] == 0:
        queue.append(i)
        dp[i] = 1

while queue:
    cur = queue[0]
    queue.pop(0)

    for i in range(len(graph[cur])):
        next = graph[cur][i]
        indegree[next] -= 1

        dp[next] = max(dp[next], dp[cur] + 1)
        if indegree[next] == 0:
            queue.append(next)

for i in range(1, N + 1):
    print(dp[i], end=' ')
