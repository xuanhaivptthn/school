x = 10000
def nhandoi(y):
    global x
    x *= 2
    x += y
    return x

print(nhandoi(1000))