//*ptr+1 é diferente de *(ptr+1)
#include <stdio.h>
int maiorvalor(int n,int *vetor){
    int *ptr;
    ptr=vetor;
    int maiornumero=*ptr;
    
 for(int i=0;i<n; i++){
    ptr++;
    if(*ptr>maiornumero){
        maiornumero=*ptr;
    }
      

    
 }
 return maiornumero;

}

int main(){
    int n;
    int vetor[100];
    int maior;
printf("Digite a quantidade de números: ");
scanf("%d",&n);
for(int i=0;i<n; i++){
    printf("Digite o  número %d: ",i+1);
    scanf("%d",&vetor[i]);
}
maior= maiorvalor(n,vetor);
printf("O maior valor é:%d",maior);
return 0;
}
