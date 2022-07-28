def descifrar(codigo):

    alfabeto = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz'

    for chave in range(26):
        descriptografia = ''

        for caractere in codigo:

            if caractere in alfabeto:
                num = alfabeto.find(caractere)
                num = num - chave

                if num < 0:
                    num = num + 26

                descriptografia = descriptografia + alfabeto[num]

            else:
                descriptografia = descriptografia + caractere

        print('Hacking... Key {} = {}'.format(chave, descriptografia))


print('\nInsira um texto com criptografia de Cesar.')
codigo = str(input('Texto: '))

print('\n')
txt_decifrado = descifrar(codigo)
print('\n')
