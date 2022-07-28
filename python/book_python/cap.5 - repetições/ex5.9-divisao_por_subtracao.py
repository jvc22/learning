print('\nDigite dois números para acharmos a divisão do primeiro pelo segundo.')
n1 = int(input('Primeiro número: '))
n2 = int(input('Segundo número: '))

acmr = n1
controle = 0

while (acmr - n2) >= 0:
    acmr = acmr - n2
    controle += 1

print(f'{n1} ÷ {n2} = {controle}, com resto = {acmr}.\n')
