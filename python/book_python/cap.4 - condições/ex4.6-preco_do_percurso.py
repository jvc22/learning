print('\nAbaixo, digite a distância total, em quilômetros, a ser percorrida.')
distancia = float(input('Distância: '))

if distancia <= 200:
    preco = distancia * 0.5
else:
    preco = distancia * 0.45

print(f'Para realizar o trajeto da sua viagem de {distancia} km, o preço a ser pago é de R${preco:.2f}.\n')
