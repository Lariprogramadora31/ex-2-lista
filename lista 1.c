#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,x;
    printf("Digite um número inteiro e positivo");
    scanf("%d",&n);

    x=2;

    while(x<n){
        if(n%x== 0){
            printf("%d não é primo", n);
            break;
        }
            x++;

        }
            if(x == n){
              printf("%d é primo", n);
            }
          return 0;
}
