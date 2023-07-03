#include <iostream>
#include "matriz.h"
using namespace std;

void diagonal2(int coluna, int linha){
    int *vetor= new int[200];
    int i=0;
    int maior=0;
    int maior2 =0;
        for(int l=0;l<linha;l++){
            for(int c=0; c<coluna-1;c++){
                if((l+c)==99 || (l==c)){
                    vetor[i] = matriz[l][c];
                    cout<<vetor[i]<<"-";
                    if(maior<vetor[i]){
                        maior=vetor[i];
                    }
                    i++; 
                }
            }
        }
        for(int i=0; i<200; i++){
            if(vetor[i] == maior){
                vetor[i] = 0;
            }
        }
        for(int i=0; i<200; i++){
            if(vetor[i]> maior2){
                maior2=vetor[i];
            }
        }
        cout<<maior2<<endl;
        
}

int main(){
    int linha=100;
    int coluna=100;
    int maior2=0;
    int nColuna=0;
    
    diagonal2( coluna, linha);

    return 0;
}