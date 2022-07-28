def cifrar(msg):
    vazio = ''

    for i in range(len(msg)):
        temp = msg[i]

        if temp != ' ':
            vazio = vazio + chr((ord(temp) + 3 - 97) % 26 + 97)
        else:
            vazio = vazio + ' '

    return vazio


print('\nDigite o texto a ser criptografado (letras minúsculas) - não insira símbolos de acentuação nem pontuação.')
msg = str(input('Texto: '))

texto_cript = cifrar(msg)

print(f'\nNovo texto: {texto_cript}\n')
