#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data {
    int dia,mes,ano;
} Data;

typedef struct sensor {
    char nome[50];
    float temperatura;
    Data data;
} Sensor;



int main(){

int n;

printf("Quantos sensores vai usar\n");
scanf("%d",&n);
getchar();
Sensor *sensores=malloc(n*sizeof(Sensor));
if (sensores == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
for (int i=0;i<n;i++){
    printf("\n--- Sensor %d ---\n", i + 1);
        printf("Nome: ");
    fgets(sensores[i].nome,sizeof(sensores[i].nome),stdin);
    sensores[i].nome[strcspn(sensores[i].nome,"\n")]='\0';
    printf("Temperatura: ");
        scanf("%f", &sensores[i].temperatura);
        printf("Data (dia mes ano): ");
        scanf("%d %d %d", &sensores[i].data.dia, &sensores[i].data.mes, &sensores[i].data.ano);
        getchar();
         printf("\nSensores com temperatura acima de 30 graus:\n");
    for ( int i = 0; i < n; i++) {
        if (sensores[i].temperatura > 30.0) {
            printf("Sensor: %s | Temp: %.1f | Data: %02d/%02d/%04d\n",
                   sensores[i].nome, sensores[i].temperatura,
                   sensores[i].data.dia, sensores[i].data.mes, sensores[i].data.ano);
        }
    }

    // Libertar memória
    free(sensores);

    return 0;
}

}


