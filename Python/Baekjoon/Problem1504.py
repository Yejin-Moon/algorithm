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
inf = 987654321

d = [inf for i in range(V + 1)]
graph = [[] for i in range(V + 1)]

for i in range(E):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))

v1, v2 = map(int, input().split())

dijkstra(1)
StartToV1 = d[v1]
StartToV2 = d[v2]

dijkstra(v1)
V1ToEnd = d[V]
V1ToV2 = d[v2]

dijkstra(v2)
V2ToEnd = d[V]

res = inf
res = min(res, StartToV1 + V1ToV2 + V2ToEnd)
res = min(res, StartToV2 + V1ToV2 + V1ToEnd)

if res == inf or V1ToV2 == inf:
    print(-1)
else:
    print(res)
