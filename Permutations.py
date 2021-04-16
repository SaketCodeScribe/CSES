n = int(input())
if n < 4 and n > 1:
    print("NO SOLUTION")
else:
    arr = [0] * n

    cnt = 1
    for i in range(n):
        if i % 2 == 0:
            arr[i] = n - i//2
        else:
            arr[i] = cnt
            cnt = cnt + 1
    if n > 4:
        arr[0], arr[n - 1] = arr[n - 1], arr[0]
    else:
        arr[0], arr[n - 2] = arr[n - 2], arr[0]

    print(" ".join(map(str, arr)))
