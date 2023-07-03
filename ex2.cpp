#include <iostream>
#include "matriz.h"
using namespace std;

void vetorzao(int coluna, int linha){
    int *vetor= new int[10000];
    int i=0;
        for(int l=0;l<linha;l++){
            for(int c=0; c<coluna-1;c++){
                vetor[i] = matriz[l][c];  
            }
            i++;
        }
}

int main(){
    int linha=100;
    int coluna=100;
    int maior2=0;
    int nColuna=0;
    
    vetorzao( coluna, linha);

    return 0;
}