
def isPalindrome(n):
    reverse = ""
    ordered = bin(n)[2:];
    for i in range(len(ordered)-1, -1, -1):
        reverse += ordered[i]
    return ordered == reverse

respuestas = int(input())


for i in range(respuestas):
    cuenta = 0
    line = input()
    line = line.split(sep=" ")
    line = [int(i) for i in line]
    for j in range(line[0], line[1]+1):
        if(isPalindrome(j)):
            cuenta += 1
    print(cuenta)

