a = int(input())
b = int(input())
c = int(input())
d = int(input())

#Tìm số lớn nhất
max = a
if (max<b): max=b
if (max<c): max=c
if (max<d): max=d

#Tìm số nhỏ nhất
min = a
if (min<b): min=b
if (min<c): min=c
if (min<d): min=d

#Gán max2 = min, duyệt từng số xem số nào lớn hơn max2 nhưng không phải max
max2 = min
if (a>max2) and (a!=max): max2=a
if (b>max2) and (b!=max): max2=b
if (c>max2) and (c!=max): max2=c
if (d>max2) and (d!=max): max2=d

print(max2)