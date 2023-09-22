#include<iostream>
using namespace std;
void transposed (int *A[4]){
	int tmp;
	for (int i = 0; i < 4 ; i++){
		for (int j = 0; j <4 ; j++){
			tmp = (*(*(A + i) + j));
			*(*(A+i)+j) = *(*(A+j)+i);
			*(*(A+j)+i) = tmp;
		}
	}
}

int main (){
	int mat [4][4];
	int (*A)[4] = mat;
	int linea = 0;
    cout << "Ingresa los valores para la matriz:" << endl;
    for (int* p = *A; p < *(A + 4); p++) {
            cin >> *p ;
        }
    for (int* q = *A; q < *(A + 4); q++) {
			cout << *q<< " " ;
			linea ++;
			if (linea == 4){
				cout << "\n";
				linea = 0;
			}
	}
	transposed((int **)A);
for (int* p = *A; p < *(A + 4); p++) {
            cin >> *p ;
        }
    for (int* q = *A; q < *(A + 4); q++) {
			cout << *q<< " " ;
			linea ++;
			if (linea == 4){
				cout << "\n";
				linea = 0;
			}
	}

	return 0;

}
