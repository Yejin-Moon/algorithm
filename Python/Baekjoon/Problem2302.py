n = int(input())
m = int(input())

vip = [int(input()) for i in range(m)]

dp = [1] * 41
dp[2] = 2

for i in range(3, n + 1):
    dp[i] = dp[i - 2] + dp[i - 1]

res = 1
startIdx = 0

for i in range(m):
    endIdx = vip[i]
    res = res * (dp[endIdx - startIdx - 1])
    startIdx = endIdx

res = res * (dp[n - startIdx])
print(res)
