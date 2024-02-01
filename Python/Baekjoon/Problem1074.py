def sol(x, y, sz):
    global res
    if c == x and r == y:
        print(res)
        return
    if c < x + sz and r < y + sz and c >= x and r >= y:
        sol(x, y, sz // 2)
        sol(x + sz // 2, y, sz // 2)
        sol(x, y + sz // 2, sz // 2)
        sol(x + sz // 2, y + sz // 2, sz // 2)
    else:
        res = res + sz * sz


N, r, c = map(int, input().split())
res = 0
sol(0, 0, 2 ** N)
