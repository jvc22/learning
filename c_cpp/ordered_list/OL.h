#include "Entry.h"
using namespace std;

#ifndef OL_H
#define OL_H

class OrderedList
{
    public:
        OrderedList();
        bool empty();
        void insert(int coef, int exp);
        void remove(int exp);
        bool search(int exp);
        void imprimir_polinomios(char K);
        void imprimir_grau(int &grau, char K);
        void soma(OrderedList p, OrderedList q);
        void multiplicacao(OrderedList p, OrderedList q);

    private:
        struct ListNode;
        typedef ListNode * ListPointer;

        struct ListNode
        {
            Entry entry;
            ListPointer nextNode;
        };

        ListPointer head, sentinel;
        int count;
};

#endif
