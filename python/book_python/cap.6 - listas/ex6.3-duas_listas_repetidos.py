print('\nAbaixo, siga as instruções para a criação de duas listas.')
l1 = []
l2 = []
l3 = []

while True:
    n = int(input('Digite um número inteiro para compor a primeira lista (digite 0 para parar): '))

    if n ==0:
        break

    l1.append(n)

print('\n')

while True:
    m = int(input('Digite um número inteiro para compor a segunda lista (digite 0 para parar): '))

    if m == 0:
        break

    l2.append(m)

l3 = l1 + l2
final = []

for i in l3:
    if i not in final:
        final.append(i)

print('\nEliminando elementos repetidos após juntar as listas, temos:')

controle = 0

while controle < len(final):
    print('Elemento {}: {}'.format((controle + 1), final[controle]))
    controle += 1

print('\n')