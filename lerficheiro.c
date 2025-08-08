#include <stdio.h>
#include <string.h>
int main(){
    char linha[100];
    FILE *f = fopen("sensor.txt","r");
    if(f==NULL){
        printf("Erro ao abrir ficheiro");
    }
    while (fgets(linha, sizeof(linha), f) != NULL) {
    printf("%s", linha);
}
fclose(f);
return 0;
}