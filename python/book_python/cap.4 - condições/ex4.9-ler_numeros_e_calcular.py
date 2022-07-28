print('\nAbaixo, digite dois números para realizar operações de sua escolha.')
n1 = float(input('Primeiro número: '))
n2 = float(input('Segundo número: '))

print('\nQual operação você deseja realizar?\n'
        '1. Adição\n'
        '2. Subtração\n'
        '3. Multiplicação\n'
        '4. Divisão (primeiro dividido pelo segundo)\n')

op = int(input('Operação (1, 2, 3 ou 4): '))

if op == 1:
    final = n1 + n2
elif op == 2:
    final = n1 - n2
elif op == 3:
    final = n1 * n2
elif op == 4:
    final = n1 / n2

print('\nO resultado da operação escolhida ({}) é igual a {}.\n'.format(op, final))
