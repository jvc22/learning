print('\nDigite as informações a respeito do seu hábito de fumar, pressionando ENTER após cada valor inserido.')
cig_dia = int(input('Cigarros fumados por dia: '))
anos = float(input('Anos fumando, aproximadamente: '))

min_perdidos = cig_dia * 10  # minutos perdidos por dia
ano_em_dias = anos * 365  # dias totais, aproximadamente, fumando

total_min = min_perdidos * ano_em_dias
final = total_min / 1440

print('Você perdeu, aproximadamente, {:.1f} dias de vida.\n'.format(final))
