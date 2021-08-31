def solve():
    n,c = map(int, input().split())
    if c not in range (n-1, int((n*(1+n))/2)):
        return -1

    lst = []
    sum = n-1 
    for i in range(n-1):
        cnt = min(n - i, c - (sum - 1))
        if cnt == 1: break
        sum += cnt - 1
        lst.append(cnt)

    ans = list(range(1, n+1))[::-1]
    for cnt in lst[::-1]:
        ans = ans[:cnt][::-1] + ans[cnt:]
    ans = ans[::-1]

    return ans

tt = int(input())
for i in range(1, tt+1):
    print("Case #"+str(i)+": ",end="")
    x = solve()
    if(x == -1):
        print("IMPOSSIBLE")
    else:
        print(*x)