'''
# A
    n = int(input())
    hi = 0
    lo = 0
    prev = int(input())
    for _ in range(0, n-1):
        m = int(input())
        if prev < m:
            hi += 1
        elif prev < m:
            lo += 1
        prev = m
    print(str(hi) + " " + str(lo), sep = "")
'''

'''

# B

S = int(input())
D = int(input())

if D > S:
    print("Impossible")
else:
    b = int((S-D)//2)
    a = b + D
    if a + b == S and abs(a-b) == D:
        print(a, b)
    else:
        print("Impossible")

'''

'''

#C

s = input()

if len(s) == 3:
    a = 0
    if s[0] == 'o':
        a += 1
    if s[1] == 'n':
        a += 1
    if s[2] == 'e':
        a += 1
    if a > 1:
        print(1)
    else:
        b = 0
        if s[0] == 't':
            b += 1
        if s[1] == 'w':
            b += 1
        if s[2] == 'o':
            b += 1
        if b > 1:
            print(2)
        else:
            print("Invalid")
elif len(s) == 5:
    c = 0
    if s[0] == 't':
        c += 1
    if s[1] == 'h':
        c += 1
    if s[2] == 'r':
        c += 1
    if s[3] == 'e':
        c += 1
    if s[4] == 'e':
        c += 1        
    if c > 3:
        print(3)
    else:
        print("Invalid")
else:
    print("Invalid")

'''

'''
#D

N = int(input())
P = int(input())
Q = int(input())

L = []

for i in range(0, N):
    n = int(input())
    L.append(n)

L.sort()

total_gm = 0
total_egg = 0
for i in L:
    if total_gm + i <= Q and total_egg + 1 <= P:
        total_gm += i
        total_egg += 1
    else:
        break

print(total_egg)
'''
