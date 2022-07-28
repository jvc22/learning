print('\nPara cálculo do valor final, digite o código do produto, \na quantidade comprada e pressione ENTER após cada inserção.')

while True:
    temp = int(input('\nDigite o código do produto, ou 0 (zero), para finalizar o programa: '))
    
    if temp == 0:
        break
    
    elif temp == 1:
        pd1 = int(input('Quantidade: '))
        valor1 = pd1 * 0.5
    
    elif temp == 2:
        pd2 = int(input('Quantidade: '))
        valor2 = pd2 * 1.0

    elif temp == 3:
        pd3 = int(input('Quantidade: '))
        valor3 = pd3 * 4.0
    
    elif temp == 5:
        pd5 = int(input('Quantidade: '))
        valor5 = pd5 * 7.0

    elif temp == 9:
        pd9 = int(input('Quantidade: '))
        valor9 = pd9 * 8.0

    else:
        print('Código INVÁLIDO!')

grupo = [valor1, valor2, valor3, valor5, valor9]
i = 0

for i in grupo:
    total = 0
    
    while i < 5:
        total += grupo[i]
        i += 1

print('\nO preço total da compra é de R${:.2f}.\n'.format(total))
