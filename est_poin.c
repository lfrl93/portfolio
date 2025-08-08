#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data{
    int dia,mes,hora,minuto;
} data;
typedef struct sensor{
    float temperatura;
    data horario;
    char *nome;
} sensor;



int main(){
    int n;
printf("Quantos sensores vai nomear?");
scanf("%d",&n);
getchar(); // remove o /n que o scanf deixa . COm isto o fgets nao vai gerar problemas.
sensor *ptr=malloc(n*sizeof(sensor));
for (int i=0;i<n;i++){
    printf("\nsensor%d\n ",i+1);
        char buffer[100];
    printf("Nome: ");
    fgets(buffer,sizeof(buffer),stdin);
    buffer[strcspn(buffer,"\n")]='\0';  // procura o \n do Enter e troca por \0 (fim de string).
    ptr[i].nome=malloc(strlen(buffer)+1);
      if (ptr[i].nome == NULL) {
            printf("Erro ao alocar nome.\n");
            return 1;
        }
            strcpy(ptr[i].nome,buffer);
    printf("Temperatura:");
        scanf("%f",&ptr[i].temperatura);
    printf("Data: Dia/Mes Hora:Minuto ");
        scanf("%d/%d %d:%d",&ptr[i].horario.dia,&ptr[i].horario.mes,&ptr[i].horario.hora,&ptr[i].horario.minuto);
        getchar();
    }
   for (int i = 0; i < n; i++) {
        printf("\nSensor %d\n", i + 1);
        printf("Nome: %s\n", ptr[i].nome);
        printf("Temperatura: %.1f°C\n", ptr[i].temperatura);
        printf("Data: %02d/%02d %02d:%02d\n",
               ptr[i].horario.dia, ptr[i].horario.mes,
               ptr[i].horario.hora, ptr[i].horario.minuto);
    }

    // Libertar memória
    for (int i = 0; i < n; i++) {
        free(ptr[i].nome);
    }
    free(ptr);

    return 0;
}


    
