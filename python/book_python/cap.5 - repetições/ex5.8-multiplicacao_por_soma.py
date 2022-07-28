print('\nDigite dois números para acharmos a multiplicação do primeiro pelo segundo.')
n1 = int(input('Primeiro número: '))
n2 = int(input('Segundo número: '))

controle = 1
acmr = 0

while controle <= n1:
    acmr = acmr + n2
    controle += 1

print(f'{n1} x {n2} = {acmr}\n')