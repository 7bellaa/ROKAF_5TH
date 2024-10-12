n = int(input())
ans = 0
for _ in range(n):
    a, b, c = map(int, input().split())
    if a == b and b == c: ans = max(ans, 10000 + 1000*a)
    elif a == b: ans = max(ans, 1000 + 100*a)
    elif b == c: ans = max(ans, 1000 + 100*b)
    elif c == a: ans = max(ans, 1000 + 100*c)
    else: ans = max(ans, 100*(max(a, b, c)))
print(ans)