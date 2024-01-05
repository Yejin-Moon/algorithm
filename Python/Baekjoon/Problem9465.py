T = int(input())
for testcase in range(T):
    N = int(input())
    dp = [[0 for i in range(N + 1)] for j in range(2)]
    arr = [0 for i in range(2)]

    for i in range(2):
        arr[i] = list(map(int, input().split()))
        arr[i].insert(0, 0)

    dp[0][1] = arr[0][1]
    dp[1][1] = arr[1][1]

    for i in range(2, N + 1):
        dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + arr[0][i]
        dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + arr[1][i]

    print(max(dp[1][N], dp[0][N]))
