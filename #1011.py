# Fly me to the Alpha Centauri
import math
t = int(input())

for i in range(t):
    x, y = map(int, input().split())
    diff = y - x
    cnt = 0
    max = 0

    while(max * max <= diff):
        max += 1
    
    max -= 1
    cnt = 2 * max - 1

    temp = diff - max * max
    temp = math.ceil(float(temp) / float(max))
    cnt += temp
    
    print(cnt)