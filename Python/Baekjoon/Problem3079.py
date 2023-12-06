def ask(totalTime) :
    friends = 0
    for t in time:
        friends+=totalTime//t
    return friends>=m

n,m = map(int,input().split())
time = [0 for i in range(n)]
max = -1
for i in range(n) :
    time[i] = int(input())
    if time[i]>max: max=time[i]

right = max*m
left = 0

while left<right:
    mid = (left+right)//2
    if ask(mid) : right=mid
    else : left=mid+1
print(right)
