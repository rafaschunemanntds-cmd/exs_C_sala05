#include<stdio.h>
#include<stdlib.h>
int main(){

    float med, area;
    printf("Informe um dos lados do quadrado: ");
    scanf("%f", &med);
    area = med*med;
    printf("A area do seu quadrado e igual a %f", area);
    
    system("pause");
    return 0;
}