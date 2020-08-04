t1 = 0
t = int(input())
while t1 < t:
    x, y, a, b = map(int, input().split())
    if ((y - x) % (a + b) == 0):
        print((y - x) // (a + b))
    else:
        print("-1")
    t1=t1+1