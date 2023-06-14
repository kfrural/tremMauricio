#include<iostream>
#include"matriz.h"

using namespace std;
//1 feito
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
//2 feito
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

//3 processando
void maiorLlinha

int main(){
    int linha=100;
    int coluna=100;

    imprimeMatriz( coluna, linha);
    vetorzao(coluna, linha);


    return 0;
}
