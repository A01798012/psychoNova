
def funcion(n, k):
    if n == 0:
        return k

    else:
        return funcion(n-1, k)+2*funcion(n-k, 1-k)


n = int(input())
print(funcion(n, 0) % 2**64)
