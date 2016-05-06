import array


t = int(input())
while t != 0:
    t -= 1
    s = input()
    skip = len(s) % 2
    a = array.array('i', (0 for i in range(0, 26)))
    for i in range(int(len(s) / 2)):
        a[ord(s[i]) - ord('a')] += 1
    for i in range(int(len(s) / 2) + skip, len(s)):
        a[ord(s[i]) - ord('a')] -= 1
    flag = True
    for i in range(0, 26):
        if (a[i] != 0):
            flag = False
            print("NO")
            break
    if (flag):
        print("YES")
