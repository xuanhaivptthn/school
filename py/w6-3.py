def s(x,n):
    return x * (1 - x ** n) / ( 1 - x )

a = float(input())
b = int(input())

print(f"{s(a,b):.3f}")