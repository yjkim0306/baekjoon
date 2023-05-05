# 다리 놓기
t = int(input())
for i in range(t):
    cnt = 1
    temp = 1
    n, m = map(int, input().split())
    for j in range(m, m - n, -1):
        cnt *= j
        cnt /= temp
        temp += 1
    print(int(cnt))