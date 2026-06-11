#include<stdio.h>
#include<stdlib.h>
int main(){

    int i,n;
    n = 7;
    for(i=0; i<=10; i++){
        printf("%d X %d = %2d\n", n, i, (n*i));
    }
    system("pause");
    return 0;
}