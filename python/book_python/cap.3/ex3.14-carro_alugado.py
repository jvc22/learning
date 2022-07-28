print('\nDigite abaixo por quantos dias o carro ficou alugado e quantos km foram rodados durante o período.')
dias = int(input('Dias: '))
km = float(input('Quilômetros rodados: '))

p_dias = 60 * dias
p_km = 0.15 * km

p_total = p_dias + p_km

print(f'O preço total a pagar é de R${p_total:.2f}.\n')
