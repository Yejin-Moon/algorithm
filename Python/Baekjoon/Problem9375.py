n = int(input())

for i in range(n):
    m = int(input())
    dic = {}
    for j in range(m):
        s1, s2 = input().split()
        if s2 in dic:
            dic[s2] += 1
        else:
            dic[s2] = 1

    dicval = list(dic.values())
    ans = 1
    for k in dicval:
        ans += ans * int(k)

    print(ans - 1)
