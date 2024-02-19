t = int(input())
for TC in range(t):
    n = int(input())
    arr = []
    for i in range(n):
        a, b = map(int, input().split())
        arr.append([a, b])
    arr = sorted(arr)

    tmp = 0
    res = 1
    for i in range(n):
        if arr[tmp][1] > arr[i][1]:
            res += 1
            tmp = i
    print(res)
