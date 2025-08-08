#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Sensor{
char *nome;
float temperatura;
} Sensor;


int main(){
    int n;
    Sensor *lista=NULL;
   printf("Quantos sensores  pretende inserir?");
   scanf("%d",&n);
   getchar();
   lista=malloc(n*sizeof(Sensor));
    if(lista==NULL){
        printf("Erro ao alocar memória\n");
        return 1;
    }
    for(int i=0;i<n;i++){
        char buffer [100];
        printf("\nSensor %d \n ",i+1);
        printf("\nNome: ");
        fgets(buffer,sizeof(buffer),stdin);
        buffer[strcspn(buffer,"\n")]='\0';
        lista[i].nome=malloc(strlen(buffer)+1);
        if(lista[i].nome==NULL){
            printf("Erro ao alocar memória");
            return 1;
        } 
        strcpy(lista[i].nome,buffer);

        printf("Temperatura: ");
        scanf("%f",&lista[i].temperatura);
        getchar();
    }
        for (int i = 0; i < n; i++) {
        printf("O sensor %d tem como nome: %s e temperatura: %.2fºC\n", i + 1, lista[i].nome, lista[i].temperatura);
    }
  

    // Libertar memória
    for (int i = 0; i < n; i++) {
        free(lista[i].nome);
    }
    free(lista);
   
    return 0;
}