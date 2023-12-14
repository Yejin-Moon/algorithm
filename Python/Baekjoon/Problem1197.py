from sys import stdin, setrecursionlimit

input = stdin.readline
setrecursionlimit(int(1e5))

group = []
arr = []
V,E = map(int,input().split())

def find(x) :
    if group[x]==x : return x
    else : group[x] = find(group[x])
    return group[x]

def union(a, b) :
    a = find(a)
    b = find(b)

    if(a<b) : a,b = b,a
    group[a] = b

for i in range(0,V+1) :
    group.append(i)

for i in range(E) :
    a,b,c = map(int,input().split())
    arr.append((c,a,b))

arr = sorted(arr)
ans=0

for i in range(E) :
    if find(arr[i][1])!=find(arr[i][2]) :
        union(arr[i][1],arr[i][2])
        ans+=arr[i][0]

print(ans)
