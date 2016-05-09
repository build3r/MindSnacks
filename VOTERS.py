from array import array

n1,n2,n3 = input().split()
n1a = []
n2a = []
n3a = []
hmap = dict()
size = 0
a = []
for i in range(0, int(n1)):
    x = int(input())

    hmap[x] = hmap.get(x, 0) + 1
for i in range(0, int(n2)):
    x = int(input())
    t = hmap.get(x, 0) + 1

    if t == 2:
        size += 1
        a.append(x)
    hmap[x] = t
for i in range(0, int(n3)):
    x = int(input())
    t = hmap.get(x, 0) + 1
    if t == 2:
        if t!=3:
            size += 1
            a.append(x)
print(size)
for i in sorted(a):
    print(i)


