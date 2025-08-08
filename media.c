//objectivo: funcao que calcule a media usando apenas ponteiros
#include <stdio.h>
#define MAX 100
float calcular_media (int n, float *valores){
    float soma=0.0;
    int i;
    float total=0.0;
    float *ptr= valores;
    for (i=0;i<n;i++){
        soma=soma+valores[i];
    }
    total=soma/n;
    return total;

}



int main(){
    int n, i;
    float valores [MAX];
    float media;
    printf("Digite o número de alunos:\n");
    scanf("%d",&n);
    if(n<0||n>MAX){                     // apenas uma verificação
        printf("Número inválido");
        return 1;                       // retorna erro 1
    }
    for (i=0;i<n;i++){
        printf("Nota do aluno número %d:\n",i+1);
        scanf("%f",&valores[i]);

    }
  media= calcular_media(n,valores);
  printf("A media é:%.1f\n",media);
return 0;
    
}