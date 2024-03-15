n = int(input())
sa = float(0)
sb = float(0)

for i in range(1, n+1):
    sa = sa + i*i
    sb = sb + 1/(i*(i+1))

print("{:.3f}".format(sa))
print("{:.3f}".format(sb+1))