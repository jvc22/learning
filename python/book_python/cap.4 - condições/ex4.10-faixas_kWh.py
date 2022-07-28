print('\nA seguir, informe os seguintes dados para cálculo do valor a ser pago.')
tipo_inst = input('R - Residencial\n'
                    'C - Comercial\n'
                    'I - Industrial\n'
                    'Tipo de instalação: ')
energia = float(input('Quantidade de kWh consumida: '))

if tipo_inst == 'R' or tipo_inst == 'r':
    if energia <= 500:
        valor = energia * 0.4
    else:
        valor = energia * 0.65
    
    print(f'\nO valor a ser pago pelo usuário é de R${valor:.2f}.\n')

elif tipo_inst == 'C' or tipo_inst == 'c':
    if energia <= 1000:
        valor = energia * 0.55
    else:
        valor = energia * 0.6
    
    print(f'\nO valor a ser pago pelo usuário é de R${valor:.2f}.\n')

elif tipo_inst == 'I' or tipo_inst == 'i':
    if energia <= 5000:
        valor = energia * 0.55
    else:
        valor = energia * 0.6
    
    print(f'\nO valor a ser pago pelo usuário é de R${valor:.2f}.\n')

else:
    print('Tipo de instalação INVÁLIDO.')