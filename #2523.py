# 별 찍기 - 13
n = int(input())
i = 1
while i <= n:
    print('*' * i)
    i += 1

i = n - 1
while i > 0:
    print('*' * i)
    i -= 1