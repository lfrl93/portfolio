#define MAX 100
#include <stdio.h>

int soma(int n,int *vetor){
    int somar=0;
    for(int i=0;i<n;i++){
        
        somar=somar+vetor[i];
    }
    return somar;

}

int main(){
    int n;
    int vetor[MAX];
    int total;
    printf("Digite o número de números do array");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("numero %d:\n",i+1);
        scanf("%d",&vetor[i]);
    }
    total= soma(n,vetor);
    printf("A soma do array é:%d",total);
return 0;
}