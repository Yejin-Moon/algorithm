def ask(mid):
    minn = maxx = arr[0]
    cnt = 1

    for i in range(1, N):
        if arr[i] < minn: minn = arr[i]
        if arr[i] > maxx: maxx = arr[i]

        if maxx - minn >= mid:
            cnt += 1
            minn = maxx = arr[i]
    return cnt >= C


N, C = map(int, input().split())
arr = [int(input()) for i in range(N)]

arr = sorted(arr)
right = arr[N - 1] - arr[0] + 1
left = 0
ans = 0

while left < right:
    mid = (left + right) // 2
    if (ask(mid)):
        ans = mid
        left = mid + 1
    else:
        right = mid

print(ans)
