a = int(input("Nhap a: "))
b = int(input("Nhap b: "))
luua = a
luub = b

while (a != b):
    if (a > b): a = a - b
    else: b = b - a
print("UCLN: ",a)
print("BCNN: ",luua * luub / a)