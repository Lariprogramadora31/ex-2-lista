#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,x;
    printf("Digite um n�mero inteiro e positivo");
    scanf("%d",&n);

    x=2;

    while(x<n){
        if(n%x== 0){
            printf("%d n�o � primo", n);
            break;
        }
            x++;

        }
            if(x == n){
              printf("%d � primo", n);
            }
          return 0;
}
