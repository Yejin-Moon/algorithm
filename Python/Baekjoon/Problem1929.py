def Eratos(m, n):
    PrimeArray = [True] * (n + 1)
    end = int(n ** (1 / 2))
    for i in range(2, end + 1):
        if PrimeArray[i] is True:
            for j in range(i * i, n + 1, i):
                PrimeArray[j] = False

    PrimeArray[1] = False
    for i in range(m, n + 1):
        if PrimeArray[i] is True:
            print(i, end='\n')

m, n = map(int, input().split())
Eratos(m, n)
