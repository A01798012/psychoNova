

def funcion(n, k):
    if n == 0:
        return k
    else:
        return funcion(n - 1, k) + 2*funcion(n - k, 1 - k)

for i in range(15):
    print(i , funcion(i,0))
