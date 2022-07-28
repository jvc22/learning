print('\nDigite três números e pressione ENTER após cada valor.')
n1 = int(input('Primeiro número: '))
n2 = int(input('Segundo número: '))
n3 = int(input('Terceiro número: '))

if n1 > n2:
    controle = n1

else:
    controle = n2

if controle > n3:
    final1 = controle

else:
    final1 = n3

if n1 > n2:
    piloto = n2

else:
    piloto = n1

if piloto > n3:
    final2 = n3

else:
    final2 = piloto

print('O maior dos números digitados é {}, ao passo que o menor é {}.\n'.format(final1, final2))