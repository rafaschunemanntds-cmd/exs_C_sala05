#include<stdio.h>
#include<stdlib.h>

int soma(int p_n1, int p_n2){
    return  p_n1 + p_n2;
}

int main(){
    int n1, n2, res;

    printf("Envie o primeiro número");
    scanf("%d", &n1);

    printf("Envie o segundo número");
    scanf("%d", &n2);
    
    res = soma(n1,n2);
    printf("%2d + %2d = %3d\n", n1, n2, res); 
    system("pause");
    return 0;
}