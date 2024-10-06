import sys
input = sys.stdin.readline

k, n = map(int, input().split())
a = [int(input()) for _ in range(k)]

start = 1
end = 2**32-1
while start <= end:
    mid = (start + end) // 2
    cnt = 0
    for i in a: cnt += i // mid
    if cnt >= n: start = mid + 1
    else: end = mid - 1
print(end)