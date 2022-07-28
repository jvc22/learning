print('\nA seguir, digite números *inteiros*.')
soma = 0
controle = 0

while True:
    temp = int(input('Digite um número inteiro, ou 0 (zero) para interromper o programa: '))
    
    if temp == 0:
        break

    soma += temp
    controle += 1
    media = soma / controle

if controle <= 1:
    print('\nVocê digitou um ou nenhum número, portanto não existe soma nem média aritmética!\n')

else:
    print('\nA quantidade de números digitados foi de {} números.'
            '\nA soma desses números é igual a {}.'
            '\nA média aritmética é equivalente a {}.\n'.format(controle, soma, media))
