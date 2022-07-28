print('\nDigite os valores das médias do aluno nas matérias 1, 2 e 3, pressionando ENTER após cada digitação.')
materia_1 = float(input('Matéria 1: '))
materia_2 = float(input('Matéria 2: '))
materia_3 = float(input('Matéria 3: '))

if materia_1 > 7 and materia_2 > 7 and materia_3 > 7:
    print('O aluno está aprovado!\n')
else:
    print('O aluno está reprovado!\n')
