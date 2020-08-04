t = int(input())
t1 = 0
while t1 < t:
    x = input()
    f = l = -1
    i = 0
    for ch in x:
        if (ch == '1'):
            if (f == -1):
                f = i
            elif (f != -1):
                l = i
        i = i + 1
    j = 0
    ans= 0
    for ch in x:
        if (j < f):
            j = j + 1
            continue
        elif (j > f):
            if (j < l):
                if (ch == '0'):
                    ans = ans + 1
        j = j + 1
    print(ans)
    t1=t1+1

        