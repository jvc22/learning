from time import sleep
import os

print('\nInforme valores inteiros para compor uma lista. Insira 0 para parar.')
l = []

while True:
    n = int(input('Número: '))

    if n == 0:
        break

    else:
        l.append(n)

l.sort()

while True:
    print('\nA lista informada, organizada de forma crescente, é:\n{}'.format(l))
    valor = int(input('\nAbaixo, digite o valor a ser procurado na lista, Insira 0 para parar.\nValor: '))

    if valor != 0:
        controle = 0

        for i in range(0, len(l)):
             if l[i] == valor:
                controle += 1
            

        if controle < 1:
            print('\nO valor {} não foi encontrado na lista...\n'.format(valor))
            sleep(1.5)
            os.system('cls')

        else:
            print(f'\nO valor {valor} foi encontrado {controle}x na lista!\n')
            sleep(1.5)
            os.system('cls')

    else:
        print('\nPrograma encerrado com sucesso!\n')
        break
