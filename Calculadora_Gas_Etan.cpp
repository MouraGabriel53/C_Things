#include <stdio.h>

float Km,
      gas,
      eta,
      Vgas,
      Veta;

main()

    {

        printf("Digite o valor a ser percorrido em quilometros:\n");
        scanf("%f", &Km);
        gas = Km/14;
        Vgas = gas*5.40;
        eta = Km/9;
        Veta = eta*4.20;
        printf("Sera necessario em litros de gasolina: %0.2f\n", gas); 
        printf("Valor em reais de gasolina: %0.2f\n", Vgas);
        printf("Sera necessario em litros de etanol: %0.2f\n", eta);
        printf("Valor em reais de etanol: %0.2f\n", Veta);

            {

                return 0;

            }

    }