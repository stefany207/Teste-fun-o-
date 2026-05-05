#include <iostream>
#include <string>
using namespace std;

int main(){
    int mat[3][5];
    int i,j;
    int clas=0;
    int med[3];
    //escrever os valores na matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout<<"Aluno "<<i+1<<" nota "<<j+1<<endl;
            cin>>mat[i][j];
        }
    }
    //vetor
    string vetor[3];
    
    for(i=0;i<3;i++){
        cout<<"Qual o nome do aluno"<<i+1<<endl;
        cin>>vetor[i];
    }
    for(int i=0;i<3;i++){
    float soma=0;

    for (int j=0;j<5;j++){
        soma+=mat[i][j];
    }

     med[i] = soma/5;
    clas+= med[i];  
    cout<<"Aluno "<<vetor[i]<<endl;
    cout<<"media "<<med[i]<<endl;
    if(med[i]>=6){
        cout<<"Aprovado"<<endl;
    }
    else if (med[i]>=5){
        cout<<"exame"<<endl;
    }
    else{
        cout<<"Reprovado"<<endl;
    }
}
cout<<"Media da classe: "<<clas/3<<endl;

return 0;

}
