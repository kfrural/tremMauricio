#include <iostream>
#include "matriz.h"
using namespace std;

void maiorLinha(int coluna, int linha){
int maior = 0;
    
    for(int l=0;l<linha;l++){
        maior = 0;
            for(int c=0; c<coluna;c++){
                if(maior < matriz[l][c]){
                    maior=matriz[l][c];
                   
                } 
            }
             cout<<" Maior"<< maior<<endl;
        }

}
void menorLinha(int coluna, int linha){
int menor = 999999;
    
    for(int l=0;l<linha;l++){
        menor = 999999;
            for(int c=0; c<coluna;c++){
                if(menor > matriz[l][c]){
                    menor=matriz[l][c];
                   
                } 
            }
             cout<<" Menor"<< menor<<endl;
        }

}
void maiorColuna(int coluna, int linha){
int maior = 0;
    
   for(int c=0; c<coluna;c++){
        maior = 0;
         for(int l=0;l<linha;l++){
                if(maior < matriz[l][c] && maior!= matriz[l][98]){
                    maior=matriz[l][c];
                   
                } 
            }
             cout<<" Maior"<< maior<<endl;
        }

}
void menorColuna(int coluna, int linha){
int menor = 999999;
    
    
         for(int c=0; c<coluna;c++){
            menor = 999999;
            for(int l=0;l<linha;l++){
                if(menor > matriz[l][c] && menor!= matriz[l][98]){
                    menor=matriz[l][c];
                   
                } 
            }
            cout<<" Menor"<< menor << endl;
        }
    
}

int main(){
    int linha=100;
    int coluna=100;
    int maior2=0;
    int nColuna=0;
    
    maiorLinha( coluna, linha);
    menorLinha( coluna, linha);
    maiorColuna( coluna, linha);
    maiorColuna( coluna, linha);

    return 0;
}