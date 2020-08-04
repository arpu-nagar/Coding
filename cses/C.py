t = int(input())
t1 = 0
while t1 < t:
        n = int(input())
        x = []
        x = list(map(int, input().split()))[:2*n] 
        x.sort()
        print(x[n] - x[n-1])
        t1=t1+1
        