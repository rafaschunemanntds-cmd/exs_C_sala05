#include<stdio.h>
#include<stdlib.h>
int main(){

    float peso, alt;
    
    printf("Qual a sua altura em metros: ");
    scanf("%f", &alt);

    printf("Informe o seu peso em kg: ");
    scanf("%f", &peso);

    printf("Seu IMC e igual a %f\n\n", peso/(alt*alt));

    
    system("pause");
    return 0;
}