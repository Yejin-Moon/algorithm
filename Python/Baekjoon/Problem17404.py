N = int(input())
ans = maxval = 987654321
rgb = [0 for i in range(N + 1)]

for i in range(1, N + 1):
    rgb[i] = list(map(int, input().split()))

for start in range(3):
    dp = [[0 for i in range(3)] for j in range(N + 1)]
    for i in range(3):
        if i == start:
            dp[1][start] = rgb[1][start]
        else:
            dp[1][i] = maxval

    for i in range(2, N + 1):
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + rgb[i][0]
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + rgb[i][1]
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + rgb[i][2]

    for i in range(0, 3):
        if i == start: continue
        ans = min(ans, dp[N][i])

print(ans)
