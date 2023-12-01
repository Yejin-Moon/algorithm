N = int(input())
M = int(input())
inf = 987654321

graph = [[inf for i in range(N + 1)] for j in range(N + 1)]

for i in range(M):
    a, b, c = list(map(int, input().split()))
    if graph[a][b] > c:
        graph[a][b] = c

for k in range(1, N + 1):
    for i in range(1, N + 1):
        for j in range(1, N + 1):
            if graph[i][j] > graph[i][k] + graph[k][j]:
                graph[i][j] = graph[i][k] + graph[k][j]

for i in range(1, N + 1):
    for j in range(1, N + 1):
        if graph[i][j] == inf or i == j:
            print(0, end=' ')
        else:
            print(graph[i][j], end=' ')
    print()
