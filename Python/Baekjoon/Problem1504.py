import heapq


def dijkstra(start):
    d = [inf for i in range(V + 1)]
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
    return d


V, E = map(int, input().split())
inf = 987654321

d = [inf for i in range(V + 1)]
graph = [[] for i in range(V + 1)]

for i in range(E):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))
    graph[b].append((a, c))

v1, v2 = map(int, input().split())

origin_dist = dijkstra(1)
startToV1 = origin_dist[v1]
startToV2 = origin_dist[v2]

v1_dist = dijkstra(v1)
v1ToEnd = v1_dist[V]
v1ToV2 = v1_dist[v2]

v2_dist = dijkstra(v2)
v2ToEnd = v2_dist[V]

res = min(startToV1 + v1ToV2 + v2ToEnd, startToV2 + v1ToV2 + v1ToEnd)

if res >= inf:
    print(-1)
else:
    print(res)
