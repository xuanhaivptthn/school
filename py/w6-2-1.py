import math
def nt(n):
    for i in range(2, math.floor(math.sqrt(n))):
        if n % i == 0:
            return False
    return True

def check(m,n):
    if (500 < m) and (n < 100000):
        return True
    return False

a = int(input())
b = int(input())

if (check(a,b)):
    d = 0
    for i in range(a,b):
        if (nt(i)):
            d += 1
    print(d)
else: print("N/A")