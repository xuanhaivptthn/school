import math
def f1(x,y):
    return x**2 + x * y + y ** 2 - 2 * x - y
def f2(x,y,z):
    if (z % 2 == 0) or (y != 0):
        print(f"{x*y*z+x/y**z:.2f}")
    else: print("N/A")

a = float(input())
b = float(input())
c = float(input())

print(f"{f1(a, b):.2f}")
f2(a,b,c)