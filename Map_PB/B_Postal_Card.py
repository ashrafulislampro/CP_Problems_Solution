n, m = map(int, input().split())
s = [input() for _ in range(n)]
t = [input() for _ in range(m)]

answer = 0

for i in range(n):
    found = False
    for j in range(m):
        if s[i][-3:] == t[j]:
            found = True
    if found:
        answer+=1
print(answer)