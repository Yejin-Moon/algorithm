def ask(mid):
    gain = 0
    for a in arr:
        gain += min(mid, a)
    return gain <= M


N = int(input())
arr = list(map(int, input().split()))
M = int(input())

right = max(arr) + 1
left = 0
ans = 0

while (left < right):
    mid = (left + right) // 2
    if ask(mid):
        ans = mid
        left = mid + 1
    else:
        right = mid
print(ans)
