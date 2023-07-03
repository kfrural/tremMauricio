#include <iostream>
#include "matriz.h"
using namespace std;

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

int main(){
    int linha=100;
    int coluna=100;
    int maior2=0;
    int nColuna=0;

    char **matrizNome;
    matrizNome = new char*[linha];
    for(int i =0;i<linha;i++){
        matrizNome[i] = new char[coluna];
    
    preencherNome( coluna, linha);

    return 0;
}