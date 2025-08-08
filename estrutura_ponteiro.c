#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct aluno{
    char nome[100];
    int idade;
    float nota1;
    float nota2;

}aluno;

int main (){
    float media=0.0;
    aluno aluno1;
    aluno *ptr=&aluno1;
printf("Digite o nome do aluno \n");
fgets(ptr->nome,sizeof(ptr->nome),stdin);
ptr->nome[strcspn(ptr->nome, "\n")] = '\0';
printf("Digite a idade do aluno: \n");
scanf("%d",&ptr->idade);
printf("Digite a nota 1 do aluno:\n");
scanf("%f",&ptr->nota1);
printf("Digite a nota 2 do aluno:\n");
scanf("%f",&ptr->nota2);
printf("A idade do aluno é:%d\n",ptr->idade);

media= (ptr->nota1+ptr->nota2)/2;
printf(" A media é:%f\n",media);



return 0; 

}
