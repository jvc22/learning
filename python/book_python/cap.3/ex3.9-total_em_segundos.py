print('\nDigite quantidades de horas, minutos e segundos e pressione ENTER após cada inserção.')
h = int(input('Horas: '))
m = int(input('Minutos: '))
s = int(input('Segundos: '))

h_segundos = h * 3600
m_segundos = m * 60

segundos_totais = h_segundos + m_segundos + s

print('O tempo total, dado em segundos, é de {}s.\n'.format(segundos_totais))