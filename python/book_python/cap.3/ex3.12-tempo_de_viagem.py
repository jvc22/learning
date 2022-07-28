print('\nA seguir, digite a distância total a ser percorrida, em km, e a velocidade média do trajeto, em km/h.')
d = float(input('\nDistância, em km: '))
vm = float(input('Velocidade média, em km/h: '))

tempo = d / vm
t_controle  = round(tempo, 0)

if tempo > t_controle:
    mins = round(((tempo - t_controle) * 60), 2)
    
    if t_controle < 2:
        print('\nO tempo total de viagem será de {:.0f} hora e {} minutos!\n'.format(t_controle, mins))
    else:
        print('\nO tempo total de viagem será de {:.0f} horas e {} minutos!\n'.format(t_controle, mins))

else:

    if t_controle == 1:
        print('\nO tempo total de viagem será de {:.0f} hora!\n'.format(t_controle))
    else:
        print('\nO tempo total de viagem será de {:.0f} horas!\n'.format(t_controle))
