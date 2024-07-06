t = int(input())
ans_arr = []
def solve(a, b):
    ans = 0
    for i in range(len(a)):
        if a[i] <= b[i]:
            continue
        ans += 1
        a.append(b[i])
        a.sort()
    ans_arr.append(ans)
    pass

while t:
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    solve(a, b)
    t -= 1

for ans in ans_arr:
    print(ans)
