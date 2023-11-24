from collections import deque

def bfs(x):
    queue = deque([x,""])
    visited[x]=True

    while queue:
        x = queue.popleft()
        op = queue.popleft()

        if x == b :
            print(op,end='\n')
            return

        D = (x*2)%10000
        if visited[D] is False:
            visited[D]=True
            queue.append(D)
            queue.append(op+'D')

        S = x-1
        if S == -1 : S=9999
        if visited[S] is False:
            visited[S]=True
            queue.append(S)
            queue.append(op+'S')

        L = (x%1000)*10 + (x//1000)
        if visited[L] is False:
            visited[L]=True
            queue.append(L)
            queue.append(op+'L')

        R = (x%10)*1000 + (x//10)
        if visited[R] is False:
            visited[R]=True
            queue.append(R)
            queue.append(op+'R')

n = int(input())
for i in range(n) :
    visited = [False]*10000
    a,b = map(int,input().split())
    bfs(a)
