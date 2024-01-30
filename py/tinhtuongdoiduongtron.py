import math #Sử dụng hàm tính căn bậc 2

#Nhập
x1 = float(input())
y1 = float(input())
r1 = float(input())
x2 = float(input())
y2 = float(input())
r2 = float(input())

l = math.sqrt((x2-x1) ** 2 + (y2-y1) ** 2) #Tính khoảng cách giữa 2 tâm đường tròn

#Tính tổng hiệu 2 bán kính
tong = r1 + r2
if (r1 > r2): hieu = r1-r2
else: hieu = r2 - r1

#https://toan123.vn/ly-thuyet/vi-tri-tuong-doi-cua-hai-duong-tron idfk
if (hieu < l) and (l < tong): print("GIAONHAU")
elif (l==0) or (l<hieu): print("TRONGNHAU")
elif (l==r1+r2) or (l==hieu): print("TIEPXUC")
elif (r1+r2 < l): print("NGOAINHAU")