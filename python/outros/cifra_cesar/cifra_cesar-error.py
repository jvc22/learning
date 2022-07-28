from curses.ascii import isupper

def cifra(msg, p):
    cifra1 = ''

    for i in range(len(msg)):
        char1 = msg[i]

        if char1.isupper():
            cifra1 = cifra1 + chr((ord(char1) + p - 65) % 26 + 65)
        else:
            cifra1 = cifra1 + chr((ord(char1) + p - 97) % 26 + 97)
        return cifra1
    
msg = 'meu nome e joao'
p = 3

print('texto plano: ' + msg)
print('padrão: ' + str(p))
print('cifra: ' + cifra(msg, p))