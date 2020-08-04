for _ in range(int(input())):
    input()
    data = list(map(int, input().split()))
    to_add = sum(v == 0 for v in data)
    total = sum(data)
    if total + to_add == 0:
        to_add += 1
    print(to_add)