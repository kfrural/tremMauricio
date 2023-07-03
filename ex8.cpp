#include <iostream>
#include "matriz.h"
using namespace std;

void repeticaoDaSoma(int soma,int linha,int coluna){
        int repeticao = 0;
        for(int i=0;i<linha;i++){
            for(int j=0;j<coluna;j++){
                if(matriz[i][j]==soma){
                    repeticao++;
                }
            }
        }
        
        cout<< repeticao;
    }

int main(){
    int linha=100;
    int coluna=100;
    int maior2=0;
    int nColuna=0;
    int C[5]={19,15,21,26,1};//souza
    int C2[8]={6,5,18,18,5,9,18,1};//ferreira
    int i=0;
    int soma2 =0;
    int soma=0;
    for(int j = 0; j < 8; j++){
        soma2 = soma2 + C2[j];
    }
    while(i<5){
        soma = soma + C[i];
        i++;
    }
    cout<<soma<<"\n"<<soma2<<endl;
    
    
    repeticaoDaSoma(soma,linha,coluna);
    cout<<"\n";
    repeticaoDaSoma(soma2,linha,coluna);

    return 0;
}