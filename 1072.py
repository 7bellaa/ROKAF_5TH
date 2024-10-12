import math
x, y = map(int, input().split())
z = int(y * 100 / x) # y / x * 100 으로 했더니 틀림. 부동소수점 이슈때문에 다 곱하고 마지막에 나눠야 함.

if z >= 99:
    print(-1)
    exit(0)

z += 1
a = ((z*x) - 100*y) / (100-z)
print(math.ceil(a))