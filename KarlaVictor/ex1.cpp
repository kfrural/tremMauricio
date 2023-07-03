#include <iostream>
#include "matriz.h"
using namespace std;

void imprimeMatriz( int coluna, int linha){
    int i = 0;
    int j = 0;
    while(i < linha){
        j=0;
        while(j<coluna-1){
            cout << matriz[i][j]<<"-";
            j++;
        }

        i++;
        cout<<"\n";
    }

    
}

int main(){
    int linha=100;
    int coluna=100;
    int maior2=0;
    int nColuna=0;
    
    imprimeMatriz( coluna, linha);

    return 0;
}