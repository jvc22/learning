n = int(input('\nDigite um número inteiro: '))
print('Iremos mostrar na tela os números ímpares de 1 até {}.\n'.format(n))

x = 1

while x <= n:
    if x % 2 != 0:
        print(x)
    
    x += 1

print('\n')