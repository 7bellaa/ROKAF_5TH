def compare(a, b):
    if len(a) != len(b): return False
    cnt = 0
    for i in range(len(a)):
        if a[i] != b[i]: cnt += 1
    return cnt == 1

while True:
    words = []
    while True:
        t = input()
        if t == '#': break
        words.append(t)

    if not words: break

    isCorrect = True
    for i in range(len(words)-1):
        if not compare(words[i], words[i+1]):
            isCorrect = False
            break
    if isCorrect: print("Correct")
    else: print("Incorrect")