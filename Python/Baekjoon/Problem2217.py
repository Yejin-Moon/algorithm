N = int(input())
arr = [int(input()) for i in range(N)]

arr = sorted(arr)
maxval = 0

for i in range(N):
    if maxval < arr[i] * (N - i):
        maxval = arr[i] * (N - i)

print(maxval)
