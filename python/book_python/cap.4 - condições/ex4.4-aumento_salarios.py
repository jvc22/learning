print('\nDigite o valor do salário para cálculo da quantia de aumento.')
salario = float(input('Salário: '))

if salario > 1250:
    novo_salario = salario * 1.10
    aumento = novo_salario - salario
else:
    novo_salario = salario * 1.15
    aumento = novo_salario - salario

print('O novo salário será de R${:.2f}, apresentando um aumento de R${:.2f}.\n'.format(novo_salario, aumento))