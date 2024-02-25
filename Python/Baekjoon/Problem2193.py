arr = [1] * 90

a = int(input())

for i in range(2, a):
    arr[i] = arr[i - 1] + arr[i - 2]

print(arr[a - 1])
