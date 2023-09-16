#include <iostream> 
using namespace std;
void transpuesta(int(*p)[4]){
        for (int *r = *p; r < *(p+3); r++){
           for (int i = 1 ; i - 3;i++ ){
                for(int l = i+1; l <4; l++){
                    swap((*(*r+i)+i),(*(*r+l)+l))
                }
           }
        }
    
}
int main(){
    int A[4][4];
    
}
