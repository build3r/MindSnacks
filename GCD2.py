t =int(input())
while t!=0:
    t -= 1
    a,b = input().split()
    a = int(a)
    b = int(b)
    while(b!=0):
        x = a % b
        a = b
        b = x
    print(a)