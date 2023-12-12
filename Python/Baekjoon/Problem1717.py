from sys import stdin, setrecursionlimit

input = stdin.readline
setrecursionlimit(int(1e5))

group = []


def find(x):
    if group[x] == x:
        return x
    else:
        group[x] = find(group[x])
    return group[x]


def union(a, b):
    a = find(a)
    b = find(b)

    if a < b: a, b = b, a
    group[a] = b


n, m = map(int, input().split())

for i in range(n + 1):
    group.append(i)

for i in range(m):
    a, b, c = map(int, input().split())
    if a == 0:
        union(b, c)
    else:
        if find(b) == find(c):
            print("YES")
        else:
            print("NO")
