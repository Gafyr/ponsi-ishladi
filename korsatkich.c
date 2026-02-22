#include <stdio.h>

int main(){
    int x;
    printf("son kirit: ");
    scanf("%d", &x);
    if(x % 2 == 0){
        printf("bu juft son: - %d\n", x);
    }
    if(x % 2 != 0){
        printf("bu son toq son: - %d\n", x);
    }
    return 0;
}