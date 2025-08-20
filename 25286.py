day = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

t = int(input())
for _ in range(t):
    y, m = map(int, input().split())

    if m == 1:
        print(f"{y-1} 12 31")
        continue

    elif m == 3:
        if y % 400 == 0 or (y % 4 == 0 and y % 100 != 0):
            print(f"{y} 2 29")
        else:
            print(f"{y} 2 28")
    
    else:
        print(f"{y} {m-1} {day[m-1]}")