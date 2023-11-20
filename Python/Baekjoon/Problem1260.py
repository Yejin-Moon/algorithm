def bfs(start):
    queue = [start]
    visited[start]=True
    while len(queue)>0:
        x = queue[0]
        print(x,end=' ')
        queue.pop(0)

        for i in range(len(graph[x])) :
            y = graph[x][i]
            if not visited[y] :
                queue.append(y)
                visited[y]=True

def dfs(x):
    visited[x] = True
    print(x, end=' ')
    for i in range(len(graph[x])):
        graph[x]=sorted(graph[x])
        y = graph[x][i]
        if not visited[y]: dfs(y)

n, m, v = map(int, input().split())
graph = [[] for _ in range(n + 1)]
for i in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

visited = [False] * (n + 1)
dfs(v)
print()
visited = [False] * (n + 1)
bfs(v)
