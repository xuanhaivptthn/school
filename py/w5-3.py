from math import sqrt

n = int(input())
sc = float(0)
sd = float(0)
temp = int(1)

for i in range(1, n+1):
    sc = sqrt(3 + sc)
    temp = temp * i
    sd = sd + temp

print("{:.3f}".format(sc))
print("{:.3f}".format(sd))