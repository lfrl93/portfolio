#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n;
    int r;
    int mais;
    printf("Quantos numeros quer inserir?\n");
    scanf("%d",&n);
    int *vetor=malloc(n*sizeof(int));
    if(vetor==NULL){
        printf("Erro ao alocar memória");
        return 1;
    }
    for (int i=0;i<n;i++){
        printf("Numero %d: \n",i+1);
        scanf("%d",&vetor[i]);

    }
    for (int i=0;i<n;i++){
        printf("Numero %d: %d\n",i+1,vetor[i]);
        
    }
    
    while(1){
         printf("Quer adicionar mais números?(sim=1/não=2)\n");
            scanf("%d",&r);
    if(r!=1) break;
        printf("Quantos mais?\n");
        scanf("%d",&mais);
        vetor=realloc(vetor,(mais+n)*sizeof(int));
        for(int i=n;i<n+mais;i++){
            printf("Numero %d: \n",i+1);
            scanf("%d",&vetor[i]);
        }
        for (int i=0;i<n;i++){
        printf("Numero %d: %d\n",i+1,vetor[i]);
        
    }

  printf("\nLista final:\n");
    for (int i = 0; i < mais+n; i++) {
        printf("Numero %d: %d\n", i + 1, vetor[i]);
    }

    
    }
    free(vetor); // libertar memória
    return 0;


}