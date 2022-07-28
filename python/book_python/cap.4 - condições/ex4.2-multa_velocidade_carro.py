print('\nDigite a velocidade em que o veículo estava durante o momento especificado.')
velocidade = int(input('Velocidade: '))

if velocidade > 80:
    controle = velocidade - 80
    multa = controle * 5
    print(f'Você foi multado!\nValor da multa = R${multa:.2f}.\n')

else:
    print('Você não foi multado!\n')
