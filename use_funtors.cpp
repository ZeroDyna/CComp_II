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
struct asc {
    T operator()(T x,T y){
        return x < y;
    }
    
};
template<class T>
struct des {
    T operator ()(T x , T y){
    return x > y;
    }
};

template <class T, class O>
class linked {

public:
	nodo<T>* head = NULL;
	void add(T valor);
	void del(T valor);
	bool find(T valor, nodo<T>*& pos);
	void print();
	~linked();
};
template <class T, class O>
bool linked<T,O>::find(T valor, nodo<T>*& pos ) {
    O op;
    pos = NULL;
    nodo<T>* p = head;
    while (p && op(p->valor , valor)) {
        pos = p;
        p = p->next;
    }
    return p && p->valor == valor;
}

template <class T,class O>
void linked<T, O>::add(T valor) {
	nodo<T>* pos;
	if (!find(valor, pos)) {
		if (!pos) {
			head = new nodo<T>(valor, head);
		}
		else
			pos->next = new nodo<T>(valor, pos->next);
	}
}
template <class T,class O>
void linked<T,O>::del(T valor) {
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
template <class T,class O>
void linked<T,O>::print() {
	nodo<T>* presente = head;
	while (presente != NULL) {
		cout << "valor actual " << presente->valor << endl;
		presente = presente->next;
	}
}
template<class T,class O>
linked<T,O>::~linked() {
	nodo<T>* presente = head;
	while (presente != NULL) {
		nodo<T>* futuro = presente->next;
		delete presente;
		presente = futuro;

	}
}


int main() {
	linked<int, des<int>> h1;
	h1.add(3);
	h1.add(9);
	h1.add(5);
	h1.add(4);
	h1.add(11);
	cout << "h1 seria" << endl;
	h1.print();


	return 0;
}
