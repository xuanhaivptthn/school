n = int(input())

n1 = int(0)
while(n!=0):
    n1 = (n1 * 10) + (n % 10)
    n = n // 10

print(n1)