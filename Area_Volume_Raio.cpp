#include <stdio.h>

float R,
    V,
    A,
    Pi = 3.14;

main() 
     
    {

        printf("Digite o valor do raio:\n");
        scanf("%f", &R);
        V = 4/3*Pi*(R*R*R);
        printf("O volume e: %.2f\n", V);
        A = 4*Pi*(R*R);
        printf("A area e: %.2f\n", A);
        
        {

            return 0;

        }     
    }    
