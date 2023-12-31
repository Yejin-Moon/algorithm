s1 = input().strip()
s2 = input().strip()

s1 = ' ' + s1
s2 = ' ' + s2
lens1 = len(s1)
lens2 = len(s2)
dp = [[0 for i in range(lens2)] for j in range(lens1)]

for i in range(1, lens1):
    for j in range(1, lens2):
        if s1[i] == s2[j]:
            dp[i][j] = dp[i - 1][j - 1] + 1
        else:
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])

print(dp[lens1 - 1][lens2 - 1])
