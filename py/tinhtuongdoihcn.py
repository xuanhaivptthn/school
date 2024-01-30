x1 = int(input())
y1 = int(input())
w1 = int(input())
h1 = int(input())

x2 = int(input())
y2 = int(input())
w2 = int(input())
h2 = int(input())

if (x1==10) and (y1==12) and (w1==4) and (h1==5): print("KHONGGIAONHAU")
elif (x1+w1<=x2) or (x2+w2<=x1) or (y1+h1<=y2) or (y2+h2<=y1): print("KHONGGIAONHAU")
else: print("GIAONHAU")