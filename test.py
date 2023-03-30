dict = {2: [], 4: [], 6: [], 8: []}

for i in dict.keys():
    for j in range(1, 10):
        dict[i].append(i * j)

print(dict)