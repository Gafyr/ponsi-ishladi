#include <stdio.h>

int main(){
    int a;
    printf("son kirit:");
    scanf("%d", &a);
    int sum =0;
    for(int i=0; i<=a; i++){
      sum += i;
    }
    printf("%d\n", sum);
   return 0;
}