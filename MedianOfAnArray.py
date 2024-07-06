from math import ceil

t = int(input())
ans = []
def solve(n, arr):
    arr.sort()
    m = ceil(n / 2) - 1
    median = arr[m]
    for i, a in reversed(list(enumerate(arr))):
        if a == median:
            t = i
            break
    ans.append( (n - m + 2 ) - (n - t + 1)) 
while t > 0:
    n = int(input())
    arr = input().split()
    for i in range(n):
        arr[i] = int(arr[i])
    solve(n, arr)
    t -= 1

for a in ans:
    print(a)
