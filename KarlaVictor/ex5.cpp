#include <iostream>
#include "matriz.h"
using namespace std;

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

int main(){
    int linha=100;
    int coluna=100;
    int maior2=0;
    int nColuna=0;
    
    inverterColuna( coluna, linha);

    return 0;
}