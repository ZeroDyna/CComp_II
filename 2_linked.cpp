#include <iostream>
using namespace std;
template <class T>
struct nodo {
	T valor;
	nodo <T>* next;
	nodo(T v, nodo<T>* n = NULL);
};
template <class T>
nodo<T>::nodo(T v, nodo<T>* n) {
	valor = v;
	next = n;
}
template <class T>
class linked {

public:
	nodo<T>* head = NULL;
	void add(T valor);
	void del(T valor);
	bool find(T valor, nodo<T>*& pos);
	void print();
	~linked();
};
template <class T>
bool linked<T>::find(T valor, nodo<T>*& pos) {
    pos = nullptr;
    nodo<T>* p = head;
    while (p && p->valor < valor) {
        pos = p;
        p = p->next;
    }
    return p && p->valor == valor;
}

template <class T>
void linked<T>::add(T valor) {
	nodo<T>* pos;
	if (!find(valor, pos)) {
		if (!pos) {
			head = new nodo<T>(valor, head);
		}
		else
			pos->next = new nodo<T>(valor, pos->next);
	}
}
template <class T>
void linked<T>::del(T valor) {
	nodo<T>* pos, * tmp; //se declara dos punteros de manera simultanea
	if (find(valor, pos)) {
		if (!pos) {
			tmp = head;
			head = head->next;
		}
		else {
			tmp = pos->next;
			pos->next = pos->next->next;

		}
		delete pos;
	}

}
template <class T>
void linked<T>::print() {
	nodo<T>* presente = head;
	while (presente != NULL) {
		cout << "valor actual " << presente->valor << endl;
		presente = presente->next;
	}
}
template<class T>
linked<T>::~linked() {
	nodo<T>* presente = head;
	while (presente != NULL) {
		nodo<T>* futuro = presente->next;
		delete presente;
		presente = futuro;

	}
}

template <class T>
void merge(linked<T>& h1, linked<T>& h2) {
    nodo<T>* p = h1.head;
    nodo<T>* q = h2.head;
    nodo<T>* r = NULL;
    
  
    if (p && q) {
         if (p->valor < q->valor) {
            r = p;
            p = p->next;
        } else {
            r = q;
            q = q->next;
        }
        
        h1.head = r;  
        
        while (p && q) {
            if (p->valor < q->valor) {
                r->next = p;
                r = p;
                p = p->next;
            } else {
                r->next = q;
                r = q;
                q = q->next;
            }
        }
        
        // mueve los nodos de p a q usando r cuando se termina una de las listas
        if (p) {
            r->next = p;
        } else if (q) {
            r->next = q;
        }
        
        //h2 para que sea NULL
        h2.head = NULL;
    }
}

int main() {
	linked<int> h1, h2;
	h1.add(3);
	h1.add(9);
	h1.add(5);
	h1.add(4);
	h1.add(11);
	h2.add(2);
	h2.add(4);
	h2.add(6);
	h2.add(7);
	cout << "h1 seria" << endl;
	h1.print();
	cout << "h2 seria" << endl;
	h2.print();
	merge(h1,h2);
	cout << "despues de usar el merge" << endl;
	cout << "h1 seria" << endl;
	h1.print();
	cout << "h2 sería" << endl;
    if (h2.head == NULL) {
        cout << "h2 es nulo" << endl;
    } 
    else {
    h2.print();
    }

	return 0;
}
