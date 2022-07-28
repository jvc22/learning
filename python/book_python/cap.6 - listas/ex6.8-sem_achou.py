l = [15, 7, 27, 39]
print('\nAbaixo, digite o valor a ser procurado na lista.')
valor = int(input('Valor: '))

x = 0
controle = 0

while x < len(l):
    if l[x] == valor:
        print('\nO valor {} foi encontrado na lista!\n'.format(valor))
        controle += 1
        break
    
    else:
        x += 1

if controle < 1:
    print('\nO valor {} não foi encontrado na lista...\n'.format(valor))