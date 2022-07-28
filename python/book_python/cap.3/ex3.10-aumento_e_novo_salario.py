print('\nDigite o valor atual do salário e a porcentagem de aumento, em número decimal, pressionando ENTER após cada inserção.')
salario_atual = float(input('Salário atual: '))
porcentagem = float(input('Porcentagem de aumento (em decimal): '))

novo_salario = salario_atual * (1 + porcentagem)
aumento = novo_salario - salario_atual

print('O novo salário será de R${:.2f}, contando com um aumento de R${:.2f} a partir da quantia prévia.\n'.format(
    novo_salario, aumento))
