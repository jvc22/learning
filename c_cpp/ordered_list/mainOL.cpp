#include <iostream>
#include <locale.h>
#include <unistd.h>
#include <cstdlib>
#include "OL.cpp"
#include "OL.h"
#include "Entry.h"
using namespace std;

int main()
{
    OrderedList p, q, controle;
    int expoente, coeficiente, grau, expoente_ctrl;
    int i, n1, n2;
    int opcao, opcao1, grau1 = 0, grau2 = 0;
    char P = 'P', Q = 'Q';
    
    do{
        system("cls");
        setlocale(LC_ALL, "portuguese");
        cout << "--------------------| Atividade Prática 4 |--------------------" << endl;
        cout << "-------------------------| POLINÔMIOS |------------------------" << endl;
        cout << "---------------| Escolha uma das opções abaixo |---------------" << endl;
        cout <<"\nDígito\t\t\tDescrição da opção" << endl;
		cout << "(1)\t\tInserir ou modificar o Polinômio P(x)" << endl;
		cout << "(2)\t\tInserir ou modificar o Polinômio Q(x)" << endl;
		cout << "(3)\t\t   Retornar o grau dos Polinômio" << endl;
		cout << "(4)\t\t Imprimir os Polinômios P(x) e Q(x)" << endl;
        cout << "(5)\t     Polinômio S(x) resultante de P(x) + Q(x)" << endl;
        cout << "(6)\t     Polinômio M(x) resultante de P(x) * Q(x)" << endl;
        cout << "(7)\t\t\tEncerrar o programa" << endl;
		cout << "\nOpção desejada: ";
		cin >> opcao;

        if(opcao == 1){
            i = 1;
            system("cls");
            cout << "--------------------| Atividade Prática 4 |--------------------" << endl;
            cout << "----------------------| Polinômio P(x) |-----------------------" << endl;
            cout << "\nDígito\t\t\tDescrição da opção" << endl;
		    cout << "(1)\t\tInserir termos no Polinômio P(x)" << endl;
		    cout << "(2)\t\tRemover termos do Polinômio P(x)" << endl;
            cout << "\nOpção desejada: ";
            cin >> opcao1;
            switch(opcao1){
                case 1:
                    cout << "\nNúmmero de termos a serem adicionados em P(x): ";
                    cin >> n1;
                    cout << "Insira os seguintes valores sem repetir expoentes!\n";
                    while(i < n1+1){
                        cout << "Coeficiente [" << i << "]: ";
                        cin >> coeficiente;
                        cout << "Expoente [" << i << "] (valor >= 0): ";
                        cin >> expoente;

                        if(expoente < 0){
                            cout << "Coeficiente < 0. Por favor, tente novamente."<< endl;
                            sleep(2.5);
                            continue;
                        }

                        p.insert(coeficiente, expoente);
                        i++;
                    }
                    cout << "\nPolinômio alterado com sucesso!\n";
                    sleep(2.5);
                    continue;
                case 2:
                    cout << "\nExpoente do termo a ser removido de P(x): ";
                    cin >> expoente_ctrl;
                    if(p.search(expoente_ctrl)){
                        p.remove(expoente_ctrl);
                        cout << "\nPolinômio alterado com sucesso!\n";
                        sleep(2.5);
                        continue;
                    }
                    else{
                        cout << "Este termo não foi encontrado. Tente novamente.";
                        sleep(2.5);
                        continue;
                    }
                    default:
                        cout << "Opção inválida. Tente novamente.";
                        sleep(2.5);
                        continue;
            }
        }
        if(opcao == 2){
            i = 1;
            system("cls");
            cout << "--------------------| Atividade Prática 4 |--------------------" << endl;
            cout << "----------------------| Polinômio Q(x) |-----------------------" << endl;
            cout << "\nDígito\t\t\tDescrição da opção" << endl;
		    cout << "(1)\t\tInserir termos no Polinômio Q(x)" << endl;
		    cout << "(2)\t\tRemover termos do Polinômio Q(x)" << endl;
            cout << "\nOpção desejada: ";
            cin >> opcao1;
            switch(opcao1){
                case 1:
                    cout << "\nNúmero de termos a serem adicionados em Q(x): ";
                    cin >> n2;
                    cout << "Insira os seguintes valores sem repetir expoentes!\n";
                    while(i < n2+1){
                        cout << "Coeficiente [" << i << "]: ";
                        cin >> coeficiente;
                        cout << "Expoente [" << i << "] (valor >= 0): ";
                        cin >> expoente;

                        if(expoente < 0){
                            cout << "Coeficiente < 0. Por favor, tente novamente." << endl;
                            sleep(2.5);
                            continue;
                        }

                        q.insert(coeficiente, expoente);
                        i++;
                    }
                    cout << "\nPolinômio alterado com sucesso!\n";
                    sleep(2.5);
                    continue;
                case 2:
                    cout << "Expoente do termo a ser removido de P(x): ";
                    cin >> expoente_ctrl;
                    if(q.search(expoente_ctrl)){
                        q.remove(expoente_ctrl);
                        cout << "\nPolinômio alterado com sucesso!\n";
                        sleep(2.5);
                        continue;
                    }
                    else{
                        cout << "Este termo não foi encontrado. Tente novamente.";
                        sleep(2.5);
                        continue;
                    }
                    default:
                        cout << "Opção inválida. Tente novamente.";
                        sleep(2.5);
                        continue;
            }
        }
        if(opcao == 3){
            cout << "\n--------------| Grau dos Polinômios P(x) e Q(x) |--------------" << endl;
            p.imprimir_grau(grau1, P);
            q.imprimir_grau(grau2, Q);
            cout << "\n";
            sleep(4);
            continue;
        }
        if(opcao == 4){
            cout << "\n--------------| Imprimir Polinômios P(x) e Q(x) |--------------" << endl;
            p.imprimir_polinomios(P);
            q.imprimir_polinomios(Q);
            cout << "\n";
            sleep(5);
            continue;
        }
        if(opcao == 5){
            cout << "\n--------------| Somar os Polinômios P(x) e Q(x) |--------------" << endl;
            controle.soma(p, q);
            cout << "\n";
            sleep(5);
            continue;
        }
        if(opcao == 6){
            cout << "\n-----------| Multiplicar os Polinômios P(x) e Q(x) |-----------" << endl;
            controle.multiplicacao(p, q);
            cout << "\n";
            sleep(5);
            continue;
        }
        if(opcao == 7){
            cout << "\nPrograma encerrado com sucesso!\n";
            abort();
        }
    }while(true);
}
