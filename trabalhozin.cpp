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



//5 feita
void inverterColuna(int coluna, int linha, int nColuna){
    int *vetor= new int [100];
    /*cout<<"informe a coluna para inverter(0 a 99): ";
    cin>> nColuna;*/

    if(nColuna >= 0 && nColuna <= 99){
       for(int i=0;i<100;i++){
        vetor[i] = matriz[(linha-1)-i][nColuna];
        cout<<vetor[i]<<endl;
    }
   
    }if(nColuna < 0 || nColuna > 99){
        cout<<"numero da coluna inexistente\n";
        inverterColuna(coluna, linha, nColuna);
    }
}

//6 processando
void preencherNome(char **matrizNome, int linha, int coluna){
        
        int z[6]={22,9,3,20,15,18};
        int z2[5]={11,1,18,12,1};
        
        for(int i=0;i<linha;i++){
            for(int j=0;j<coluna;j++){
              matrizNome[i][j] = '-';  
            }
        }
        
        matrizNome[22][18]='V';
        matrizNome[22][20]='I';
        matrizNome[22][22]='C';
        matrizNome[22][24]='T';
        matrizNome[22][26]='O';
        matrizNome[22][28]='R';
        matrizNome[11][1] ='K';
        matrizNome[11][3] ='A';
        matrizNome[11][5] ='R';
        matrizNome[11][7] ='L';
        matrizNome[11][9] ='A';
        
        for(int i=0;i<linha;i++){
            cout<<endl;
            for(int j=0;j<coluna;j++){
                cout <<matrizNome[i][j];
            }
        }
        
        
        
}
//Questão 8
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
    cout<<"informe a coluna para inverter(0 a 99): ";
    cin>> nColuna;
    inverterColuna(coluna, linha, nColuna);
   /* char **matrizNome;
    matrizNome = new char*[linha];
    for(int i =0;i<linha;i++){
        matrizNome[i] = new char[coluna];
    }*/
    //preencherNome(matrizNome,linha,coluna);
    
   /* int C[5]={19,15,21,26,1};//souza
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
    }*/
    //cout<<soma<<"\n"<<soma2<<endl;
    
    
    //repeticaoDaSoma(soma,linha,coluna);
   // cout<<"\n\n";
    //repeticaoDaSoma(soma2,linha,coluna);
    return 0;
}