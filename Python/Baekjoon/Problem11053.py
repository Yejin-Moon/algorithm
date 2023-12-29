from bisect import bisect_left

n = int(input())
arr = list(map(int, input().split()))
dp = [arr[0]]

for i in range(1, n):
    if arr[i] > dp[-1]:
        dp.append(arr[i])
    else:
        t = bisect_left(dp, arr[i])
        dp[t] = arr[i]

print(len(dp))
