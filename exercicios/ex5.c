#include<stdio.h>
#include<stdlib.h>
int main(){

    float n1, n2, n3, n4, n5, media;
    
    printf("Informe a nota1: ");
    scanf("%f", &n1);

    printf("Informe a nota2: ");
    scanf("%f", &n2);

    printf("Informe a nota3: ");
    scanf("%f", &n3);

    printf("Informe a nota4: ");
    scanf("%f", &n4);

    printf("Informe a nota 5: ");
    scanf("%f", &n5);

    media = (n1 + n2 + n3 + n4 + n5)/5;

    if (media < 7){
        printf("Sua media foi %f entao voce esta reprovado\n\n", media);
    }
    else{
        printf("Sua media foi %f entao voce esta Aprovado\n\n",media );
    }
    
    system("pause");
    return 0;
}