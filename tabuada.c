#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

    setlocale(LC_ALL, "portuguese");

    int i, n;

    printf("Informe um número para tabuada: \n");
    scanf("%d", &n);

    printf("\nT A B U A D A\n");
    printf("=============");
    for(i=0; i<=10; i++){
        printf("\n %d X %2d = %4d", n, i, (n*i));
    }

    printf("\n=============\n\n\n");

    system("pause");
    return 0;
}