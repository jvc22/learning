print("Modos de operação:")
print("1 - Valor presente de um financiamento")
print("2 - Valor minimo de prestaçao para valor presente cobrir pagamento a vista")
print("3 - Comparação de opções de pagamento")
print("4 - Tabela comparativa de opçoes de pagamento para taxas variadas")
n = int(input("Número do modo desejado = "))
if n == 1:
    vp = int(input("\nValor da prestaçao: "))
    i = int(input("Taxa de juros: "))
    np = int(input("Numero de prestaçoes: "))
    if np > 1:
        vpp = int((vp / (i / 1000)) * (1 + (i / 1000) -
                  1 / ((1 + (i / 1000)) ** (np - 1))))
    print("Valor presente:", int(vpp))
if n == 2:
    va = int(input("\nValor a vista: "))
    i = int(input("Taxa de juros: "))
    np = int(input("Numero de prestaçoes: "))
    prt = (va*i)/(1000*(1 + i / 1000 - (1 / (1 + (i / 1000)) ** (np - 1))))
    print("Menor prestaçao cujo valor presente do financiamento cobre o valor a vista: ", int(prt))


if n == 3:
    va = int(input("\nValor a vista: "))
    i = int(input("Taxa de juros: "))
    p12 = int(input("Valor da prestaçao em 12 vezes: "))
    p24 = int(input("Valor da prestaçao em 24 meses: "))
    vp12 = (p12/(i/1000))*(1+i/1000-1/(1+(i/1000))**(11))
    vp24 = (p24/(i/1000))*(1+i/1000-1/(1+(i/1000))**(23))
    print("")
    print("Valor presente em 12 vezes: ", int(vp12))
    print("Valor presente em 24 vezes: ", int(vp24))
    if va < vp12 and va < vp24:
        print("Numero de parcelas da melhor opçao de pagamento: 1")
    elif vp12 < vp24:
        print("Numero de parcelas da melhor opçao de pagamento: 12")
    else:
        print("Numero de parcelas da melhor opçao de pagamento: 24")

if n == 4:
    va = int(input("\nValor a vista: "))
    p12 = int(input("Valor da prestaçao em 12 vezes: "))
    p24 = int(input("Valor da prestaçao em 24 meses: "))
    it = int(input("Inicio da sequencia de taxas: "))
    nt = int(input("Numero de taxas: "))
    itp = int(input("Incremento de uma taxa para a proxima: "))
    j = 0
    print("\ntaxa    |     a vista    |    12 vezes   |    24 vezes   |    decisao")
    while nt > j:
        vp12 = (p12/(it/1000))*(1+it/1000-1/(1+(it/1000))**(11))
        vp24 = (p24/(it/1000))*(1+it/1000-1/(1+(it/1000))**(23))
        vp12 = round(vp12)
        vp24 = round(vp24)

        if (va < vp12) & (va < vp24):
            dec = 1
        elif vp12 == vp24:
            if vp12 < va:
                dec = 12
        elif vp12 < vp24:
            dec = 12
        else:
            dec = 24

        print(it, "\t" "|\t", va, "|\t", vp12, "|\t", vp24, "|\t", dec)
        it = it + itp
        j = j + 1

    print("\n")
