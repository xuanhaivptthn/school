x = float(input())
y = int(input())
tich = 1
for i in range(y):
    tich *= x
print("{:.3f}".format(tich))