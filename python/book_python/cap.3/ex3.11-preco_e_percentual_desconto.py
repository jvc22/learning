print('\nAbaixo, insira o preço atual da mercadoria e o percentual de desconto (em decimal), pressionando ENTER após cada valor.')
preco_atual = float(input('Preço atual: '))
percent = float(input('Percentual de desconto: '))

novo_preco = preco_atual * (1 - percent)
desconto = preco_atual - novo_preco

print(f'O novo preço é R${novo_preco:.2f} e o valor descontado foi de R${desconto:.2f}.\n')
