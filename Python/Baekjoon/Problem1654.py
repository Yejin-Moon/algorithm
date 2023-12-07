def ask(mid):
    gain = 0
    for a in arr:
        gain += (a // mid)
    return gain >= N  # 조각이 너무 자잘해. mid 값을 올려야 함


K, N = map(int, input().split())
arr = [int(input()) for i in range(K)]

right = max(arr)+1
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
