#include "Pessoa.h"
using namespace std;

#ifndef QUEUE_H
#define QUEUE_H

class Queue
{	
	public:
		Queue();
		void append(Pessoa nova_pessoa);
		void serve(string &nome, int &idade, string &cpf, string &endereco);
		bool empty();
		void verifica_tam_nome(int x);
		void verifica_tam_endereco(int x);
		void verifica_idade(int x);
		void imprimir_slot();
	private:
		struct QueueNode;
		typedef QueueNode (* QueuePointer);
	
	struct QueueNode{
		Pessoa entry;
		QueuePointer nextNode;
	};
	
	QueuePointer head, tail;

};

#endif
