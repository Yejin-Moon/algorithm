res = 0
cnt = 0
s = input()
for i in range(len(s)):
    if s[i] == "(":
        if s[i + 1] == ")":
            res += cnt
            i = i + 1
            continue
        cnt += 1
    if s[i - 1] != "(" and s[i] == ")":
        res += 1
        cnt -= 1

print(res)
