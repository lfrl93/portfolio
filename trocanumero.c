#include <stdio.h>
int main(){
    int a=10;
    int b=20;
    int *ptr;
    int temp;
printf("antes da troca: a= %d b=%d",a,b);
    temp=a;
    ptr=&b;
    a=*ptr;
    b=temp;
    printf("depois da troca a=%d b=%d",a,b);


}