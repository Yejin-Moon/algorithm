code = [input() for _ in range(5)]

zero = ['***', '* *', '* *', '* *', '***']
one = ['  *', '  *', '  *', '  *', '  *']
two = ['***', '  *', '***', '*  ', '***']
three = ['***', '  *', '***', '  *', '***']
four = ['* *', '* *', '***', '  *', '  *']
five = ['***', '*  ', '***', '  *', '***']
six = ['***', '*  ', '***', '* *', '***']
seven = ['***', '  *', '  *', '  *', '  *']
eight = ['***', '* *', '***', '* *', '***']
nine = ['***', '* *', '***', '  *', '***']
numbers = [zero, one, two, three, four, five, six, seven, eight, nine]

sz = len(code[0])
flag = False
flags = [False] * 5
all_flags = [False] * 10
res = []
ans = 0
for i in range(0, sz + 1, 4):
    for n in range(10):
        for x in range(5):
            if code[x][i:i + 3] == numbers[n][x]:
                flags[x] = True
        if all(flags):
            all_flags[n] = True
            ans = ans * 10 + n
        flags = [False] * 5
    if any(all_flags):
        all_flags = [False] * 10
        continue
    else:
        print("BOOM!!")
        exit()

if ans % 6 != 0:
    print("BOOM!!")
else:
    print("BEER!!")
