i = int(input('\nDigite o primeiro valor: '))
j = int(input('Digite o segundo valor: '))
n = int(input('Quantidade de "primeiros múltiplos": '))
print('\n')

a = b = 1
m = p = 0
final = []

while m < n:
   
    k = i*a
    u = j*b
    
    if k < u:
       
        final.append(k)
        a += 1
    
    elif k > u:
       
        final.append(u)
        b += 1
   
    else:
       
        a += 1
        b += 1
        final.append(u)
    
    m += 1

m = 0
print(f'Primeiros {n} múltiplos por ordem crescente, considerando a tabuada de ambos os números:')

while p < n:
    
    print(final[p])
    p += 1

print('\n')