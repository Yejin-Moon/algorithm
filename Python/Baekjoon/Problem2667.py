dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

def dfs(x, y):
    for i in range(4):
        rx = x + dx[i]
        ry = y + dy[i]

        if rx >= n or rx < 0 or ry >= n or ry < 0: continue
        if visited[rx][ry] is False and graph[rx][ry] == 1:
            visited[rx][ry] = True
            result[idx]+=1
            dfs(rx, ry)

n = int(input())
graph = [] * n
visited = [[False for c in range(n)] for r in range(n)]
idx=0
result = []
for i in range(n):
    graph.append(list(map(int, input())))

for i in range(n):
    for j in range(n):
        if graph[i][j] == 1 and visited[i][j] is False:
            result.append(1)
            visited[i][j] = True
            dfs(i, j)
            idx+=1

result = sorted(result)
print(idx,end='\n')
for r in result:
    print(r,end='\n')
