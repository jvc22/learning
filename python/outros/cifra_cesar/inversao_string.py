mensagem = 'Silly Walks'
cifrada = ''

i = len(mensagem) - 1

while i >= 0:
    cifrada = cifrada + mensagem[i]
    i -= 1

print('cifrado: ', cifrada)