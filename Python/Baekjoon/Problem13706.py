n = int(input())
right = n
left = 0

while 1:
    mid = (left + right) // 2
    if mid ** 2 == n:
        print(mid)
        break
    elif mid ** 2 < n:
        left = mid + 1
    elif mid ** 2 > n:
        right = mid
