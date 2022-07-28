print('\nAbaixo, digite as devidas informações.')
n = int(input('Tabuada do número: '))
fim = int(input('Até o número: '))
print('\n')

controle = 1

while controle <= fim:
    print(f'{n} x {controle} = {n * controle}')
    controle = controle + 1

print('\n')