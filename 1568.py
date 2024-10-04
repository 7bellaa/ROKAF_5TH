import math

n = int(input())
ans = 0
while n > 0:
    i = (math.sqrt(8*n+1) - 1) // 2
    ans += i
    n -= (i*i + i) // 2
print(int(ans))

# 그냥 구현해도 되지만 약간의 수학 첨가..