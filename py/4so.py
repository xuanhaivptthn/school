a = int(input())
b = int(input())
c = int(input())
d = int(input())

max = a
if (max<b): max=b
if (max<c): max=c
if (max<d): max=d

min = a
if (min<b): min=b
if (min<c): min=c
if (min<d): min=d

max2 = min
if (a>max2) and (a!=max): max2=a
if (b>max2) and (b!=max): max2=b
if (c>max2) and (c!=max): max2=c
if (d>max2) and (d!=max): max2=d

print(max2)