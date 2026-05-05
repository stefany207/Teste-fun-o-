#include <iostream>
#include <string>
using namespace std;

int main(){
    int mat[15][5];
    int i,j;
    int clas=0;
    int med[15];
   //escrever os valores na matriz
for (int i = 0; i < 15; i++) {
   for (int j = 0; j < 5; j++) {
        cout<<"Aluno "<<i+1<<" nota "<<j+1<<endl;
    cin>>mat[i][j];
    }
}
//vetor
string vetor[15];
int a;
for(a=0;a<15;a++){
cout<<"Qual o nome do aluno"<<a+1<<endl;
cin>>vetor[a];
}
for(int i=0;i<15;i++){
    float soma=0;

    for (int j=0;j<5;j++){
        soma+=mat[i][j];
    }

     med[i] = soma/5;
    clas+= med[i];  
    cout<<"Aluno"<<vetor[a];
    cout<<"medio"<<med[i];
    if(med[i]>=6){
        cout<<"Aprovado"<<endl;
    }
    else if (med[i]<6){
        cout<<"exame"<<endl;
    }
    else{
        cout<<"Reprovado"<<endl;
    }
}
cout<<"Media da classe:"<<clas<<endl;

return 0;

}
