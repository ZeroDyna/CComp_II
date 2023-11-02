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
	nodo<T>* head = NULL;
public:
	void add(T valor);
	void del(T valor);
	bool find(T valor, nodo<T>*& pos);
	void print();
	~linked();
};
template <class T>
bool linked<T>::find(T valor, nodo<T>*& pos) {
	pos == NULL;
	nodo<T>* p = head;
	for (; p && p->valor < valor; pos = p, p = p->next) {
		if (p && p->valor == valor) {
			return 1;
		}
		else
			return 0;
	}
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
	nodo<T>* pos, * tmp; //se declara dos variables de manera simultanea
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
int main() {
	linked<int> h1, h2;
	h1.add(1);
	h1.add(3);
	h1.add(5);
	h1.add(9);
	h1.add(11);
	h2.add(2);
	h2.add(4);
	h2.add(6);
	h2.add(7);
	cout << "h1 seria" << endl;
	h1.print();
	cout << "h2 seria" << endl;
	h2.print();
	return 0;
}
