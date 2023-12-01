import heapq

def dijkstra(start):
    d[start] = 0
    h = []
    heapq.heappush(h, (0, start))

    while h:
        dis, cur = heapq.heappop(h)
        if d[cur] < dis: continue
        for i in graph[cur]:
            nextDis = dis + i[1]
            if nextDis < d[i[0]]:
                d[i[0]] = nextDis
                heapq.heappush(h, (nextDis, i[0]))


V, E = map(int, input().split())
K = int(input())
inf = 987654321

d = [inf for i in range(V + 1)]
graph = [[] for i in range(V + 1)]

for i in range(E):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))

dijkstra(K)

for i in range(1, V + 1):
    if d[i] == inf:
        print("INF")
    else:
        print(d[i])
