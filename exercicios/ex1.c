#include<stdio.h>
#include<stdlib.h>
int main(){

    char nome[50];
    int num;
    
    printf("Informe o seu nome: ");
    scanf("%s",nome);
    printf("Informe um numero: ");
    scanf("%d", &num);

    if (num<15){
        printf("Sesi e o seu nome eh: %s", nome);
    }
    else{
        printf("Senai e o seu nome eh: %s", nome);
    }

    system("pause");
    return 0;
}