

mapa = dict()


def busDict(palabra):

    for i in range(0, len(palabra)):
        if palabra[i] in mapa.keys():
            mapa[palabra[i]].append(i)

        else:
            mapa[palabra[i]] = [i]


palabra = input()
cantidad = int(input())

for i in range(cantidad):
    linea = input()
    linea = linea.split()
    objetivo = linea[0]
    inicio = int(linea[1])
    longitud = int(linea[2])

    final = inicio+longitud-1

    busDict(palabra)
    encontrado = False
    for i in mapa[objetivo]:
        if i >= inicio and i <= final:
            print(1)
            encontrado = True
            break

    if not encontrado:
        print(0)
