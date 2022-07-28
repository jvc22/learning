print('\nDigite três números e pressione ENTER após cada valor.')
n1 = int(input('Primeiro número: '))
n2 = int(input('Segundo número: '))
n3 = int(input('Terceiro número: '))

maior = n1
    
if n2 > maior:
    maior = n2

if n3 > maior:
    maior = n3

menor = n1

if n2 < menor:
    menor = n2

if n3 < menor:
    menor = n3

print(f'O maior dos números digitados é {maior}, ao passo que o menor é {menor}.\n')