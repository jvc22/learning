salario = int(input('Digite o valor do seu salário: '))
imposto = salario > 1200

if imposto == True:
    print('\nVocê deverá pagar imposto!')
else:
    print('\nVocê não deverá pagar imposto!')
