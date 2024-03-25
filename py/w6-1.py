import math
def f(x):
    if (x > 1):
        return math.sqrt(x**2 - 1)
    elif (-1 <= x):
        return (-2*(x-3))
    else: return 0

def g(x):
    if (x < -2):
        return (6-5*x)
    elif (x > 2):
        return (x**2+1)
    else:
        return (2*x-1)

a = float(input())
print("{:.2f}".format(f(a)))
print("{:.2f}".format(g(a)))