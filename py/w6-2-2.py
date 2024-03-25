import math
def hc(x):
    tong = 0
    for i in range(1,x):
        if (x % i == 0):
            tong = tong + i
    if (tong == x): return True
    else: return False

def check(n):
    if (1 < n) and (n < 100000):
        return True
    return False

a = int(input())
if (check(a)):
    for i in range(1,a):
        if (hc(i)):
            print(i, end = " ")
else: print("N/A")