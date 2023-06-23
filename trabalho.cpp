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

//5 feita
void inverterColuna(int coluna, int linha){
    int nColuna = 0;
    int *vetor= new int [100];
    cout<<"informe a coluna para inverter(0 a 99): ";
    cin>> nColuna;

    if(nColuna >= 0 && nColuna <= 99){
       for(int i=0;i<100;i++){
        vetor[i] = matriz[(linha-1)-i][nColuna];
        cout<<vetor[i]<<endl;
    }
   
    }if(nColuna < 0 || nColuna > 99){
        cout<<"numero da coluna inexistente\n";
        inverterColuna(coluna, linha);
    }
}

//6 processando
void nome(char **matrizNome, int coluna, int linha){
    int a =1, int b =2, int c=3, int d=4, int e=5, int f=6, int g=7;
    int h =8, int i =9, int j=10, int k=11, int l=12, int m=13, int n=14;
    int o =15, int p =16, int q=17, int r=18, int s=19, int t=20, int u=21;
    int v =22, int w =23, int x=24, int y=25, int z=26;
    
    //i = vetorZ[10];// letra 'k' n 11, mas como vetor comca de 0 a posicao eh 10
   // j = vetorZ[0];// letra 'a' n 1, mas como o vetor comeca de 0 a posicao eh 0
    
    matrizNome[10][0] = 'K';
    matrizNome[12][0] = 'a';
    matrizNome[14][0] = 'r';
    matrizNome[16][0] = 'l';
    matrizNome[18][0] = 'a';
}

void imprimeMatrizNome(void *nome(char **matrizNome, int coluna, int linha), int coluna, int linha){
    for(int i=0;i < linha; i++){
        for(int j = 0;j < coluna; j++){
            cout << matrizNome[i][j]<<"-";
        }
        cout<<"\n";
    }
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
    /*if(diagonal(coluna, linha) > diagonal2(coluna, linha)){
        maior2 = diagonal2(coluna, linha);
    }else{
        maior2 = diagonal(coluna, linha);
    }
    cout<<maior2;*/
    //inverterColuna(coluna, linha);
    char **matrizNome = new char*[100];
    imprimeMatriz(matrizNome, coluna, linha);
    return 0;
}
