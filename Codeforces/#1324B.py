t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int, input().split()))
    ok = False
    for i in range(n):
        for j in range(i+2, n):
            if(l[i] == l[j]):
                ok = True
    print("YES" if ok else "NO")