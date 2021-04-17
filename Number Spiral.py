n = int(input())

for i in range(n):
    x, y = input().split()
    x = int(x)
    y = int(y)
    mx = max(x, y)
    if mx == 1:
        print(1)
    else:
        if mx % 2 != 0:
            if mx == y:
                print(mx**2-x+1)
            else:
                mx = mx-1
                print(mx**2+y)
        else:
            if mx == y:
                mx = mx-1
                print(mx**2+x)
            else:
                print(mx**2-y+1)