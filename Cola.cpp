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
	nodo <T>* inicio; //punteros al inicio y final o head y tail de la cola genericos 
	nodo <T>* final;
public:
    cola() : inicio(NULL), final(NULL) {}
    
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
	bool pop(T &valor) {
		if (empty()) {
			return 0;
		}
		else{
		valor = inicio->valor;
		nodo<T>* tmp = inicio;
		inicio = inicio->next;
		delete tmp;
		return 1;
		}
	}
	void print() {
		nodo<T>* presente = inicio;
		while (presente != NULL){
			cout << "valor actual " << presente->valor << endl;
			presente = presente->next;
		}

	}
	~cola() {
    nodo<T>* presente = inicio;
    while (presente != NULL){
    nodo<T>* futuro = presente->next;
    delete presente;
    presente = futuro;
    }

	}
};

int main() {
    char valor_eliminado;
    cola<char> miCola;
    
    miCola.push('a');
    miCola.push('b');
    
    if(miCola.empty()==0){
        cout << "Elementos de la cola: \n";
    }
    else 
        cout << "No tiene elementos es un null"<< endl;
    
    miCola.print();

	if(miCola.pop(valor_eliminado) == 0){
	    cout << "el elemento no se ha eliminado" << endl;
	}
    else{
	    cout<< "el elemento si se ha eliminado" <<endl;
	    
	}

    cout << "Elementos de la cola después del pop: \n";
    miCola.print();

    return 0;
} //para la siguiente tarea no usar new. delete, ni crear una coopia
