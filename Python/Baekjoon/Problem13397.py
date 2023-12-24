def ask(mid):
    min = arr[0]
    max = arr[0]
    cnt = 0
    for i in range(1, N):
        if min > arr[i]: min = arr[i]
        if max < arr[i]: max = arr[i]

        if max - min > mid:
            cnt += 1
            min = arr[i]
            max = arr[i]
    return cnt < M

N, M = map(int, input().split())
arr = list(map(int, input().split()))

right = max(arr)
left = 0
ans = 0
while (left < right):
    mid = (left + right) // 2
    if (ask(mid)):
        ans = mid
        right = mid
    else:
        left = mid + 1

print(ans)
