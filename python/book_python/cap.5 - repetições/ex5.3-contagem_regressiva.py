from time import sleep

print('\nA Contagem regressiva para o lançamento do foguete será iniciada agora!\n')
sleep(1)

t = 10

while t >= 1:
    print(t)
    t = t - 1
    sleep(1)

print('\nFogo! \nLançamento iniciado!\n')
