array = []
mx = 0
sortarr = []

for i in input().split():
    q = int(i)
    array.append(q)
    mx = max(q, mx)

meow = [0] * (mx + 1)

for i in array:
    meow[i] += 1
c = 0
for i in meow:
    if i > 0:
        for j in range(i):
            sortarr.append(c)
    c += 1
print(sortarr)