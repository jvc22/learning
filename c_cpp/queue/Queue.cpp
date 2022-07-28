#include <iostream>
#include <string>
#include <cstring>
#include "Queue.h"
#include "Pessoa.h"
using namespace std;

Queue::Queue()
{
	head = tail = NULL;
}

bool Queue::empty()
{
	return(head == NULL);
}

void Queue::append(Pessoa nova_pessoa)
{ 
	QueuePointer p;
	p = new QueueNode;

	p->entry = nova_pessoa;

	if(empty()){
		head = tail = p;
	}
	else{ 
		tail->nextNode = p;
		tail = p;
	}
 
	p->nextNode = NULL;
}

void Queue::imprimir_slot()
{
	QueuePointer p;
	string nome, cpf, endereco;
	int idade, i = 1;
	
	if(empty()){
		cout << "\nFila vazia. Tente novamente.";
		abort();
	}
	
	for(p = head; p != NULL; p = p->nextNode){
		cout << "\nPosição na fila = " << i << endl;
		cout << "Nome: " << p->entry.nome << endl;
		cout << "Idade: " << p->entry.idade << endl;
		cout << "CPF: " << p->entry.cpf << endl;
		cout << "Endereço: " << p->entry.endereco << endl;
		i++;
	}
	
	abort();
}

void Queue::serve(string &nome, int &idade, string &cpf, string &endereco)
{ 
	int n = 0;
	
	do{
		QueuePointer p;

		if(empty()){ 
			cout << "\nFila vazia. Tente novamente.";
			break;
		}
	
		nome = head->entry.nome;
		cpf = head->entry.cpf;
		endereco = head->entry.endereco;
		idade = head->entry.idade;
		
		p = head;
		head = head->nextNode;
		delete p;
		
		if(head == NULL){
			tail == NULL;
		}
		
		cout << "\nIndivíduo vacinado!" << endl << "A fila andou em uma posição." << endl; 
		cout << "-----| Nome: " << nome << endl << "-----| Idade: " << idade << endl << "-----| CPF: " << cpf << endl << "-----| Endereço: " << endereco << endl;
		cout << endl;
		cout << "             _.---._     .---." << endl;
		cout << "    __...---' .---. `---'-.   `." << endl;
		cout << " .-''__.--' _.'( | )`.  `.  `._ :" << endl;
		cout << ".'__-'_ .--'' ._`---'_.-.  `.   `-`." << endl;
		cout << "       ~ -._ -._``---. -.    `-._   `. " << endl;
		cout << "                ~ -.._ _ _ _ ..-_ `.  `-._``--.._ " << endl;
		cout << "                             -~ -._  `-.  -. `-._``--.._.--''." << endl; 
		cout << "                               V v~ ~-.__     -._  `-.__   `. `." << endl; 
		cout << "             PARABÉNS!              V V ~~ ~---...__ _    ._ .` `." << endl;
		cout << "                                            V V V  v~  ~--.....-v~" << endl;
		cout << "                                                         V V  V" << endl;
				
		n += 1;
	}while(n < 1);
}

void Queue::verifica_tam_nome(int x)
{
	if(x > 200){
		cout << "\nNome muito grande (acima de 200 caracteres).\nTente novamente." << endl;
		abort();
	}
}

void Queue::verifica_idade(int x)
{
	if(x < 5){
		cout << "\nO indivíduo deve possuir uma idade maior ou igual a 5 (cinco) anos. Tente novamente." << endl;
		abort();
	}
}

void Queue::verifica_tam_endereco(int x)
{
	if(x > 400){
		cout << "\nEndereço muito grande (acima de 400 caracteres).\nTente novamente." << endl;
		abort();
	}
}
