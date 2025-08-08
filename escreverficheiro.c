#include <stdio.h>
#include <string.h>
int main(){
    char nome[100];
    float temperatura;
    printf("Digite o nome do sensor: ");
    fgets(nome, sizeof(nome),stdin);
    nome[strcspn(nome,"\n")]='\0';
    printf("Temperatura: ");
    scanf("%f",&temperatura);
    FILE *f= fopen("sensor.txt","w");
    if(f==NULL){
        printf("Erro ao abrir ficheiro");
        return 1;
    }
fprintf(f,"Sensor %s\n",nome);
fprintf(f,"temperatura: %0.1f\n",temperatura);
printf("Dados gravados no ficheiro sensor.txt\n");
fclose(f);
return 1;

}