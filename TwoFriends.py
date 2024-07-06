t = int(input())
ans = []

def solve(p, n):
    f = [ (x + 1) for x in range(n) ]
    saved_p = None
    for i in range(n):
        saved_p = p[i]
        j = i + 1
        for j in range(n):
            if f[j] == saved_p and p[j] == f[i]:
                ans.append(2)
                return
    ans.append(3)

while t:
    n = int(input())
    p = list(map(int, input().split()))
    solve(p, n)
    t -= 1

for a in ans:
    print(a)
