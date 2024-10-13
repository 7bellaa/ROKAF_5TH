a, d, k = map(int, input().split())
k -= a
if (k % d == 0) and (k // d >= 0): print(k // d + 1) # a == k 인 경우 답이 1이 나와야 하므로 k // d >= 0 으로 해야하는데 k // d > 0으로 해서 틀림.
else: print("X")