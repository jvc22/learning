#include <iostream>
#include <locale.h>
#include <string>
#include <cstring>
#include <unistd.h>
#include <time.h>
#include "Queue.cpp"
#include "Queue.h"
#include "Pessoa.h"
using namespace std;

int main()
{
	system("color 02");
	Queue queue, slot1, slot2, slot3, slot4, slot5, slot6, slot7, slot8, slot9, slot10;
	Pessoa pessoa;
	int opcao1, opcao2, opcao3, opcao4, tam;
	int max_slot = 100, controle[11] = {0}, controle_1[11] = {0};
	int idade_temp;
	string nome_temp, cpf_temp, endereco_temp;
	
	do{
		system("cls");
		setlocale(LC_ALL, "Portuguese");
		cout << "-----------------------------| Atividade Prática 3 |-----------------------------" << endl;
		cout << "---------------------| FILA DE VACINAÇÃO SEMANAL: COVID-19 |---------------------" << endl;
		cout << "------------------------| Escolha uma das opções abaixo |------------------------" << endl;
		cout <<"\nDígito\t\t\tDescrição da opção" << endl;
		cout << "(1)\t\tCadastro na fila (acima de 5 anos)" << endl;
		cout << "(2)\t\tMostrar fila de determinado período" << endl;
		cout << "(3)\t\t Andar fila em determinado período" << endl;
		cout << "(4)\t\t\t Fechar programa" << endl;
		cout << "\nOpção desejada = ";
		cin >> opcao1;
	
		if(opcao1 == 1){
			system("cls");
			cout << "-----------------------------| Atividade Prática 3 |-----------------------------" << endl;
			cout << "---------------------| FILA DE VACINAÇÃO SEMANAL: COVID-19 |---------------------" << endl;
			cout << "------| Cadastro na fila (atenha-se a caracteres alfanuméricos e espaços) |------" << endl;
			cout << "\nNome (até 200 caracteres): ";
			cin.ignore();
			getline(cin, pessoa.nome);
			tam = (pessoa.nome).length();
			queue.verifica_tam_nome(tam);
		
			cout << "Idade: ";
			cin >> pessoa.idade;
			queue.verifica_idade(pessoa.idade);
			
			cout << "CPF - NÃO insira pontos e/ou traços: ";
			cin.ignore();
			getline(cin, pessoa.cpf);
	
			cout << "Endereço: ";
			getline(cin, pessoa.endereco);
			tam = (pessoa.endereco).length();
			queue.verifica_tam_endereco(tam);
			
			cout << "\nEscolha um Slot para cadastrar o indivíduo na fila:";
			cout << "\nDígito\t\t    Dia\t\t\tPeríodo\t\tVagas" << endl;
			if(controle[1] < 100)
				cout << "(1)\t\tSegunda-Feira\t\t Manhã\t\t " << (100 - controle[1]) << endl;
			if(controle[2] < 100)
				cout << "(2)\t\tSegunda-Feira\t\t Tarde\t\t " << (100 - controle[2]) << endl;
			if(controle[3] < 100)
				cout << "(3)\t\tTerça-Feira\t\t Manhã\t\t " << (100 - controle[3]) << endl;
			if(controle[4] < 100)
				cout << "(4)\t\tTerça-Feira\t\t Tarde\t\t " << (100 - controle[4]) << endl;
			if(controle[5] < 100)		
				cout << "(5)\t\tQuarta-Feira\t\t Manhã\t\t " << (100 - controle[5]) << endl;
			if(controle[6] < 100)
				cout << "(6)\t\tQuarta-Feira\t\t Tarde\t\t " << (100 - controle[6]) << endl;
			if(controle[7] < 100)
				cout << "(7)\t\tQuinta-Feira\t\t Manhã\t\t " << (100 - controle[7]) << endl;
			if(controle[8] < 100)
				cout << "(8)\t\tQuinta-Feira\t\t Tarde\t\t " << (100 - controle[8]) << endl;
			if(controle[9] < 100)
				cout << "(9)\t\tSexta-Feira\t\t Manhã\t\t " << (100 - controle[9]) << endl;
			if(controle[10] < 100)
				cout << "(10)\t\tSexta-Feira\t\t Tarde\t\t " << (100 - controle[10]) << endl;
			
			cout << "\nEscolha = ";
			cin >> opcao2;
			
			switch(opcao2){
				case 1:
					cout << "Indivíduo cadastrado com sucesso!" << endl;
					slot1.append(pessoa);
					controle[1] += 1;
					controle_1[1] += 1;
					sleep(2);
					continue;
				case 2:
					cout << "Indivíduo cadastrado com sucesso!" << endl;
					slot2.append(pessoa);
					controle[2] += 1;
					controle_1[2] += 1;
					sleep(2);
					continue;
				case 3:
					cout << "Indivíduo cadastrado com sucesso!" << endl;
					slot3.append(pessoa);
					controle[3] += 1;
					controle_1[3] += 1;
					sleep(2);
					continue;
				case 4:
					cout << "Indivíduo cadastrado com sucesso!" << endl;
					slot4.append(pessoa);
					controle[4] += 1;
					controle_1[4] += 1;
					sleep(2);
					continue;
				case 5:
					cout << "Indivíduo cadastrado com sucesso!" << endl;
					slot5.append(pessoa);
					controle[5] += 1;
					controle_1[5] += 1;
					sleep(2);
					continue;
				case 6:
					cout << "Indivíduo cadastrado com sucesso!" << endl;
					slot6.append(pessoa);
					controle[6] += 1;
					controle_1[6] += 1;
					sleep(2);
					continue;
				case 7:
					cout << "Indivíduo cadastrado com sucesso!" << endl;
					slot7.append(pessoa);
					controle[7] += 1;
					controle_1[7] += 1;
					sleep(2);
					continue;
				case 8:
					cout << "Indivíduo cadastrado com sucesso!" << endl;
					slot8.append(pessoa);
					controle[8] += 1;
					controle_1[8] += 1;
					sleep(2);
					continue;
				case 9:
					cout << "Indivíduo cadastrado com sucesso!" << endl;
					slot9.append(pessoa);
					controle[9] += 1;
					controle_1[9] += 1;
					sleep(2);
					continue;
				case 10:
					cout << "Indivíduo cadastrado com sucesso!" << endl;
					slot10.append(pessoa);
					controle[10] += 1;
					controle_1[10] += 1;
					sleep(2);
					continue;
				default:
					cout << "Opção inválida. Tente novamente.";
					sleep(2);
					continue;
			}
		}
		
		if(opcao1 == 2){
			cout << "\nSelecione o Slot que deseja visualizar:";
			cout << "\nDígito\t\t    Dia\t\t\tPeríodo" << endl;
			cout << "(1)\t\tSegunda-Feira\t\t Manhã" << endl;
			cout << "(2)\t\tSegunda-Feira\t\t Tarde" << endl;
			cout << "(3)\t\tTerça-Feira\t\t Manhã" << endl;
			cout << "(4)\t\tTerça-Feira\t\t Tarde" << endl;
			cout << "(5)\t\tQuarta-Feira\t\t Manhã" << endl;
			cout << "(6)\t\tQuarta-Feira\t\t Tarde" << endl;
			cout << "(7)\t\tQuinta-Feira\t\t Manhã" << endl;
			cout << "(8)\t\tQuinta-Feira\t\t Tarde" << endl;
			cout << "(9)\t\tSexta-Feira\t\t Manhã" << endl;
			cout << "(10)\t\tSexta-Feira\t\t Tarde" << endl;
			cout << "\nEscolha = ";
			cin >> opcao3;
			
			switch(opcao3){
				case 1:
					slot1.imprimir_slot();
				case 2:
					slot2.imprimir_slot();
				case 3:
					slot3.imprimir_slot();
				case 4:
					slot4.imprimir_slot();
				case 5:
					slot5.imprimir_slot();
				case 6:
					slot6.imprimir_slot();
				case 7:
					slot7.imprimir_slot();
				case 8:
					slot8.imprimir_slot();
				case 9:
					slot9.imprimir_slot();
				case 10:
					slot10.imprimir_slot();
				default:
					cout << "\nOpção inválida. Tenta novamente." << endl;
					continue;
			}
		}
		
		if(opcao1 == 3){
			cout << "\nSelecione o Slot em que o indivíduo vacinado se encontra:";
			cout << "\nDígito\t\t    Dia\t\t\tPeríodo\t\tN° pessoas" << endl;
			cout << "(1)\t\tSegunda-Feira\t\t Manhã\t\t   " << (controle_1[1]) << endl;
			cout << "(2)\t\tSegunda-Feira\t\t Tarde\t\t   " << (controle_1[2]) << endl;
			cout << "(3)\t\tTerça-Feira\t\t Manhã\t\t   " << (controle_1[3]) << endl;
			cout << "(4)\t\tTerça-Feira\t\t Tarde\t\t   " << (controle_1[4]) << endl;
			cout << "(5)\t\tQuarta-Feira\t\t Manhã\t\t   " << (controle_1[5]) << endl;
			cout << "(6)\t\tQuarta-Feira\t\t Tarde\t\t   " << (controle_1[6]) << endl;
			cout << "(7)\t\tQuinta-Feira\t\t Manhã\t\t   " << (controle_1[7]) << endl;
			cout << "(8)\t\tQuinta-Feira\t\t Tarde\t\t   " << (controle_1[8]) << endl;
			cout << "(9)\t\tSexta-Feira\t\t Manhã\t\t   " << (controle_1[9]) << endl;
			cout << "(10)\t\tSexta-Feira\t\t Tarde\t\t   " << (controle_1[10]) << endl;
			cout << "\nEscolha = ";
			cin >> opcao4;
			
			switch(opcao4){
				case 1:
					slot1.serve(nome_temp, idade_temp, cpf_temp, endereco_temp);
					controle_1[1] -= 1;
					
					if(controle_1[1] < 0){
						controle_1[1] = 0;
					}
					
					sleep(5);
					continue;
				case 2:
					slot2.serve(nome_temp, idade_temp, cpf_temp, endereco_temp);
					controle_1[2] -= 1;
					
					if(controle_1[2] < 0){
						controle_1[2] = 0;
					}
					
					sleep(5);
					continue;
				case 3:
					slot3.serve(nome_temp, idade_temp, cpf_temp, endereco_temp);
					controle_1[3] -= 1;
					
					if(controle_1[3] < 0){
						controle_1[3] = 0;
					}
					
					sleep(5);
					continue;
				case 4:
					slot4.serve(nome_temp, idade_temp, cpf_temp, endereco_temp);
					controle_1[4] -= 1;
					
					if(controle_1[4] < 0){
						controle_1[4] = 0;
					}
					
					sleep(5);
					continue;
				case 5:
					slot5.serve(nome_temp, idade_temp, cpf_temp, endereco_temp);
					controle_1[5] -= 1;
					
					if(controle_1[5] < 0){
						controle_1[5] = 0;
					}
					
					sleep(5);
					continue;
				case 6:
					slot6.serve(nome_temp, idade_temp, cpf_temp, endereco_temp);
					controle_1[6] -= 1;
					
					if(controle_1[6] < 0){
						controle_1[6] = 0;
					}
					
					sleep(5);
					continue;
				case 7:
					slot7.serve(nome_temp, idade_temp, cpf_temp, endereco_temp);
					controle_1[7] -= 1;
					
					if(controle_1[7] < 0){
						controle_1[7] = 0;
					}
					
					sleep(5);
					continue;
				case 8:
					slot8.serve(nome_temp, idade_temp, cpf_temp, endereco_temp);
					controle_1[8] -= 1;
					
					if(controle_1[8] < 0){
						controle_1[8] = 0;
					}
					
					sleep(5);
					continue;
				case 9:
					slot9.serve(nome_temp, idade_temp, cpf_temp, endereco_temp);
					controle_1[9] -= 1;
					
					if(controle_1[9] < 0){
						controle_1[9] = 0;
					}
					
					sleep(5);
					continue;
				case 10:
					slot10.serve(nome_temp, idade_temp, cpf_temp, endereco_temp);
					controle_1[10] -= 1;
					
					if(controle_1[10] < 0){
						controle_1[10] = 0;
					}
					
					sleep(4);
					continue;
				default:
					cout << "Opção inválida. Tente novamente.";
					sleep(4);
					continue;
			}
		}
		
		if(opcao1 == 4){
			cout << "\nPrograma encerrado." << endl;
			abort();
		}
	}while(true);

	return 0;
}
