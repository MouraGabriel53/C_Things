#include <stdio.h>

float V1,
      V2,
      som,
      sub,
      mult,
      div;

main() 

    {

        printf("Digite o valor 1:\n");
        scanf("%f", &V1);
        printf("Digite o valor 2:\n");
        scanf("%f", &V2);
        som = V1+V2;
        sub = V1-V2;
        mult = V1*V2;
        div = V1/V2;
        printf("A soma e: %f\n", som);
        printf("A subtracao e: %f\n", sub);
        printf("A multiplicacao e: %f\n", mult);
        printf("A divisao e: %f\n", div);

            {

                return 0;

            }
    }