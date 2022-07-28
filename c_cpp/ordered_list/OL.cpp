#include <iostream>
#include <cstdlib>
#include "OL.h"
#include "Entry.h"
using namespace std;

OrderedList::OrderedList()
{
    sentinel = new ListNode;
    head = sentinel;
    count = 0;
}

bool OrderedList::empty()
{
    return(head == sentinel);
}

void OrderedList::insert(int coef, int exp)
{
    ListPointer p, q;
    
    sentinel->entry.coef = coef;
    sentinel->entry.exp = exp;
    p = head;
    while(p->entry.exp < exp){
        p = p->nextNode;
    }

    q = new ListNode;
    if(q == NULL){
        cout << "Memória insuficiente." << endl;
    }

    if(p == sentinel){
        p->nextNode = q;
        sentinel = q;
    }
    else{
        *q = *p;
        p->entry.coef = coef;
        p->entry.exp = exp;
        p->nextNode = q;
    }

    count++;
}

void OrderedList::remove(int exp)
{
    ListPointer p = NULL, q = head;

    sentinel->entry.exp = exp;
    while(q->entry.exp < exp){
        p = q;
        q = q->nextNode;
    }

    if(q->entry.exp != exp || q == sentinel){
        return;
    }

    if(q == head){
        head = q->nextNode;
    }
    else{
        p->nextNode = q->nextNode;
    }

    delete q;
    count -= 1;
}

bool OrderedList::search(int exp)
{
    ListPointer q = head;
    
    sentinel->entry.exp = exp;
    while(q->entry.exp < exp){
        q = q->nextNode;
    }
    if(q->entry.exp != exp || q == sentinel){
        return false;
    }
    else{
        return true;
    }
}

void OrderedList::imprimir_polinomios(char K)
{
    ListPointer p;
    int n = 0;
	
    while(n < 1){
        if(empty()){
            cout << "\nPolinômio " << K << "(x) vazio. Tente novamente.\n";
            break;
        }
        
        cout << "\nPolinômio " << K << "(x) = ";
        for(p = head; p != sentinel; p = p->nextNode){
            if(p->entry.exp > 1){
                if(p->entry.coef < 0){
                    if(p != head){
                        cout << " - " << abs(p->entry.coef) << "x^" << p->entry.exp;
                    }
                    else{
                        cout << "- " << abs(p->entry.coef) << "x^" << p->entry.exp;
                    }
                }
                if(p->entry.coef > 0){
                    if(p != head){
                        cout << " + " << p->entry.coef << "x^" << p->entry.exp;
                    }
                    else{
                        cout << p->entry.coef << "x^" << p->entry.exp;
                    }
                }
                if(p->entry.coef == 0){
                    if(p != head){
                        cout << " + " << p->entry.coef << "x^" << p->entry.exp;
                    }
                    else{
                        cout << p->entry.coef << "x^" << p->entry.exp;
                    }
                }
            }
            if(p->entry.exp == 1){
                if(p->entry.coef < 0){
                    if(p != head){
                        cout << " - " << abs(p->entry.coef) << "x^" << p->entry.exp;
                    }
                    else{
                        cout << "- " << abs(p->entry.coef) << "x^" << p->entry.exp;
                    }
                }
                if(p->entry.coef > 0){
                    if(p != head){
                        cout << " + " << p->entry.coef << "x^" << p->entry.exp;
                    }
                    else{
                        cout << p->entry.coef << "x^" << p->entry.exp;
                    }
                }
                if(p->entry.coef == 0){
                    if(p != head){
                        cout << " + " << p->entry.coef << "x^" << p->entry.exp;
                    }
                    else{
                        cout << p->entry.coef << "x^" << p->entry.exp;
                    }
                }
            }
            if(p->entry.exp == 0){
                if(p->entry.coef < 0){
                    if(p != head){
                        cout << " - " << abs(p->entry.coef) << "x^" << p->entry.exp;
                    }
                    else{
                        cout << "- " << abs(p->entry.coef) << "x^" << p->entry.exp;
                    }
                }
                if(p->entry.coef > 0){
                    if(p != head){
                        cout << " + " << p->entry.coef << "x^" << p->entry.exp;
                    }
                    else{
                        cout << p->entry.coef << "x^" << p->entry.exp;
                    }
                }
                if(p->entry.coef == 0){
                    if(p != head){
                        cout << " + " << p->entry.coef << "x^" << p->entry.exp;
                    }
                    else{
                        cout << p->entry.coef << "x^" << p->entry.exp;
                    }
                }
            }
        }
        n+=1;
    }
}

void OrderedList::imprimir_grau(int &grau, char K)
{
    ListPointer p;
    int n = 0;

    while(n < 1){
        if(empty()){
            cout << "\nPolinômio " << K << "(x) vazio. Tente novamente.\n";
            break;
        }
       
       for(p = head; p != sentinel; p = p->nextNode){      
            if(grau < p->entry.exp, p->entry.coef != 0, p != head){
                grau = p->entry.exp;
            }
            else{
            	continue;
			}
        }
        cout << "\nGrau do Polinômio " << K << "(x) = " << grau;
        n+=1;
    }
}

void OrderedList::soma(OrderedList P, OrderedList Q)
{
    OrderedList R;
    ListPointer p, q, r;
    int expoente, coeficiente, n = 0;
    char K = 'S';

    while(n < 1){
        if(P.empty()){
            cout << "\nPolinômio P(x) não encontrado. Tente novamente.\n";
            break;
        }
        if(Q.empty()){
            cout << "\nPolinômio Q(x) não encontrado. Tente novamente.\n";
            break;
        }

        for(p = P.head; p != P.sentinel; p = p->nextNode){
            R.insert(p->entry.coef, p->entry.exp);
        }
        for(q = Q.head, r = R.head; q != Q.sentinel; q = q->nextNode){
            expoente = q->entry.exp;
            if(R.search(expoente)){
                coeficiente = r->entry.coef;
                R.remove(expoente);
                R.insert((q->entry.coef + coeficiente), expoente);
            }
            else{
                R.insert(q->entry.coef, q->entry.exp);
            }
        }
        R.imprimir_polinomios(K);
        n+=1;
    }
}

void OrderedList::multiplicacao(OrderedList P, OrderedList Q)
{
    OrderedList M, M1;
    ListPointer p, q, m;
    int expoente, coeficiente_ctrl, coeficiente, n = 0;
    char K = 'M';

    while(n < 1){
        if(P.empty()){
            cout << "\nPolinômio P(x) não encontrado. Tente novamente.\n";
            break;
        }
        if(Q.empty()){
            cout << "\nPolinômio Q(x) não encontrado. Tente novamente.\n";
            break;
        }

        for(p = P.head; p != P.sentinel; p = p->nextNode){
            M.insert(p->entry.coef, p->entry.exp);
        }
        for(q = Q.head; q!= Q.sentinel; q = q->nextNode){
            for(m = M.head; m != M.sentinel; m = m->nextNode){
                expoente = (q->entry.exp)+(m->entry.exp);
                coeficiente = (q->entry.coef)*(m->entry.coef);
                if(M1.search(expoente)){
                    coeficiente_ctrl = m->entry.coef;
                    M1.remove(expoente);
                    M1.insert((coeficiente + coeficiente_ctrl), expoente);
                }
                else{
                    M1.insert(coeficiente, expoente);
                }
            }
        }
        M1.imprimir_polinomios(K);
        n+=1;
    }
}
