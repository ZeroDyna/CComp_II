#include <iostream>
using namespace std;
template<class T>
class nodo {
public:
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
class cola {
private:
	nodo <T>* inicio; //punteros al inicio de la cola genericos 
	nodo <T>* final;
public:
    cola() : inicio(nullptr), final(nullptr) {}
    
	bool empty() {
		if (final == NULL) {
			return 1;
		}
		else{
			return 0;
		}
	}
	void push(T valor) { //trato de agregar un elemento al final de la cola de tipo T osea generico
		nodo<T>* n = new nodo <T>(valor);
		if (empty()) {
			inicio = final = n;
		}
		else {
			final->next = n;
			final = n;
		}
	}
	void pop() {
		if (empty()) {
			cout << "es un null" << endl;
		}
		nodo<T>* tmp = inicio;
		inicio = inicio->next;
		delete tmp;
	}
	void print() {
		nodo<T>* presente = inicio;
		while (presente != NULL){
			cout << "valor actual " << presente->valor << endl;
			presente = presente->next;
		}

	}
	~cola() {
		while (!empty()) {
			pop();
		}
	}
};
int main() {
    cola<char> miCola;
 
    if(miCola.empty()==0){
    cout << "Elementos de la cola: \n";
    }
    else 
    cout << "No tiene elementos es un null"<< endl;
    }
    miCola.print();

	miCola.pop();

    cout << "Elementos de la cola después del pop: \n";
    miCola.print();

    return 0;
}
