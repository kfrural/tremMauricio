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

//4 feita
int diagonal(int coluna, int linha){
    int *vetor= new int[100];
    int i=0;
    int maiorVet1=0;
        for(int l=0;l<linha;l++){
            for(int c=0; c<coluna-1;c++){
                if(l==c){
                    vetor[i] = matriz[l][c];
                   // cout<<vetor[i]<<"-"<<endl;  
                    if(maiorVet1<vetor[i]){
                        maiorVet1=vetor[i];
                    }
                }
            }
        }
        //cout<<maiorVet1<<endl;
        return maiorVet1;
}
int diagonal2(int coluna, int linha){
    int *vetor= new int[100];
    int i=0;
    int maiorVet2=0;
        for(int l=0;l<linha;l++){
            for(int c=0; c<coluna-1;c++){
                if((l+c)==99){
                    vetor[i] = matriz[l][c];
                    //cout<<vetor[i]<<"-"<<endl;
                    if(maiorVet2<vetor[i]){
                        maiorVet2=vetor[i];
                    } 
                }
            }
        }
        //cout<<maiorVet2<<endl;
        return maiorVet2;
}


int main(){
    int linha=100;
    int coluna=100;
    int maior2=0;

    //imprimeMatriz( coluna, linha);
   // vetorzao(coluna, linha);
   // maiorLinha(coluna, linha);
    //menorLinha(coluna, linha);
    //menorColuna(coluna,linha);
    //maiorColuna(coluna,linha);
   // diagonal(coluna, linha);
    //diagonal2(coluna, linha);
    if(diagonal(coluna, linha) > diagonal2(coluna, linha)){
        maior2 = diagonal2(coluna, linha);
    }else{
        maior2 = diagonal(coluna, linha);
    }
    cout<<maior2;
    return 0;
}
