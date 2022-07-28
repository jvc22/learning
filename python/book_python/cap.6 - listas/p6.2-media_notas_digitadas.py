print('\nAbaixo, informe as notas do aluno.\n')
notas = [0, 0, 0, 0, 0]
soma = 0
controle = 0

while controle < 5:
    notas[controle] = float(input(f'Nota {(controle + 1)}: '))
    soma += notas[controle]
    controle += 1

controle = 0
print('\n')

while controle < 5:
    print(f'Nota {(controle + 1)} = {notas[controle]:.2f}')
    controle += 1

media = soma/controle

print(f'\nA média aritmética do aluno é igual a {media:.2f}.\n')