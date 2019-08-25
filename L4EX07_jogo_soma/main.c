#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int numUsuario;
    int total;
    char resp = 's';

    while(resp == 's'){
        if(resp == 's'){
            int num1 = rand() % 999;
            int num2 = rand() % 999;
            total = num1 + num2;
            printf("Qual a soma de %d + %d?\n", num1, num2);
            scanf("%d", &numUsuario);

            if(numUsuario == total){
                printf("\nParabens voce acertou!\n");
                printf("\nResultado: %d", total);
        } else {
            printf("\nQue pena voce errou!\n");
            printf("\nResultado: %d", total);
          }
          printf("\n\nQuer continuar jogando?\n");
          scanf(" %c", &resp);
        }
    }
    return 0;
}
