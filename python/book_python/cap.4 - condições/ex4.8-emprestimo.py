print('\nPara o empréstimo, informes os seguintes dados:')
valor_casa = float(input('Valor da casa: '))
valor_salario = float(input('Valor do salário: '))
anos = float(input('Período de pagamento, em anos: '))

prest = valor_casa / (anos * 12)

if prest <= (0.3 * valor_salario):
    print(f'O empréstimo foi aprovado e o valor de cada prestação é de R${prest:.2f}.\n')
else:
    print('O empréstimo não foi aprovado.\n')