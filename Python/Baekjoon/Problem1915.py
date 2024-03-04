n, m = map(int, input().split())
rect = [[0] * (m + 1) for i in range(n + 1)]

for i in range(1, n + 1):
    rect[i] = list(map(int, input()))
    rect[i].insert(0, 0)

res = 0
for i in range(1, n + 1):
    for j in range(1, m + 1):
        if rect[i][j] != 0:
            rect[i][j] = min(rect[i - 1][j - 1], min(rect[i - 1][j], rect[i][j - 1])) + 1
            if res < rect[i][j]: res = rect[i][j]

print(res * res)
