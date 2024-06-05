# include <stdio.h>
# include <conio.h>
# include <math.h>

char op; 
float rValor1, rValor2, resultado, resultado2, cont_controle = 1; 
int i = 0;

void menu()
{
    printf("Soma: '+'\n");
    printf("Subtracao: '-'\n"); 
    printf("Multiplicacao: '*'\n");
    printf("Divisao: '/'\n");
    printf("Potencia^2: '#'\n"); 
    printf("Potencia^3: '@'\n");
    printf("Potencia^4: '&'\n");
    printf("Raiz quadrada: '$'\n");
    printf("Valor1^2+Valor2^3: '%%'\n");
}

    float soma(float x, float y)
    {
        float som = x+y;
        return(som);
    }

    float subtracao(float x, float y)
    {
        float sub = x-y;
        return(sub);
    }

    float multiplicacao(float x, float y)
    {
    float multip = x*y;
    return(multip);
    }

    float divisao(float x, float y)
    {
        if(y != 0)
        {
            float div = x/y;
            return(div);
        }
        
        else
        {
            printf("-----Nao e possivel dividir por zero!-----\n");
            return 0; 
        }
    }

    float pot2_X(float x)
    {
    float xPot2 = pow(x, 2);
    return(xPot2);
    }

    float pot2_Y(float y)
    {
    float yPot2 = pow(y,2);
    return(yPot2);
    }

    float pot3_X(float x)
    {
    float xPot3 = pow(x, 3);
    return(xPot3);
    }

    float pot3_Y(float y)
    {
    float yPot3 = pow(y,3);
    return(yPot3);
    }

    float pot4_X(float x)
        {
        float xPot4 = pow(x, 4);
        return(xPot4);
        }

    float pot4_Y(float y)
        {
        float yPot4 = pow(y,4);
        return(yPot4);
        }

    float raiz_X(float x)
    {
        float xRaz = sqrt(x);
        return(xRaz);
    }

    float raiz_Y(float y)
    {
        float yRaz = sqrt(y);
        return(yRaz);
    }

    float somapot(float x, float y)
    {
        float xPot2 = pow(x, 2);
        float yPot3 = pow(y, 3);
        float soma = xPot2+yPot3;
        return(soma);
    }

void ler_op()
{
   switch (op)
        {
        case '+': 
            resultado = soma(rValor1, rValor2); 
            printf("O resultado e: %.2f\n", resultado);
            break;
        
        case '-':
            resultado = subtracao(rValor1, rValor2); 
            printf("O resultado e: %.2f\n", resultado);
            break;

        case '*':
            resultado = multiplicacao(rValor1, rValor2); 
            printf("O resultado e: %.2f\n", resultado);
            break;

        case '/':
            resultado = divisao(rValor1, rValor2); 
            printf("O resultado e: %.2f\n", resultado);
            break;

        case '#':
            resultado = pot2_X(rValor1); 
            resultado2 = pot2_Y(rValor2); 
            printf("O resultado do valor 1 e: %.2f\n", resultado);
            printf("O resultado do valor 2 e: %.2f\n", resultado2);
            break;

        case '@':
            resultado = pot3_X(rValor1); 
            resultado2 = pot3_Y(rValor2); 
            printf("O resultado do valor 1 e: %.2f\n", resultado);
            printf("O resultado do valor 2 e: %.2f\n", resultado2);
            break;

        case '&':
            resultado = pot4_X(rValor1); 
            resultado2 = pot4_Y(rValor2); 
            printf("O resultado do valor 1 e: %.2f\n", resultado);
            printf("O resultado do valor 2 e: %.2f\n", resultado2);
            break;

        case '$':
            resultado = raiz_X(rValor1); 
            resultado2 = raiz_Y(rValor2); 
            printf("O resultado do valor 1 e: %.2f\n", resultado);
            printf("O resultado do valor 2 e: %.2f\n", resultado2);
            break;
            
        case '%':
            resultado = somapot(rValor1, rValor2);
            printf("O resultado e: %.2f\n", resultado);
            break;

            default: printf("-----Indicador invalido!-----\n");
            break;
        }
}

main()
{
    printf("-----Tecle ENTER para iniciar-----\n");
    getch();
    printf("----------Calculadora----------\n");
    
    for (i = 0; i < 4; i++)
    {
        printf("Digite o valor 1:\n");
        scanf("%f", &rValor1);
        printf("Tecle ENTER para continuar\n");
        getch();
        printf("Digite o valor 2:\n");
        scanf("%f", &rValor2);
        printf("Tecle ENTER para continuar\n");
        getch();
        printf("----------Menu----------\n");
        menu();
        printf("====================\n");
        printf("Escolha a operacao que deseja fazer:");
        scanf("%s", &op);
        ler_op();
        printf("Apenas para controle de quantidade: %.0f/4\n", cont_controle);
        cont_controle++; 
        printf("Tecle ENTER para continuar\n");
        getch();
    }
    
    printf("----------Muito obrigado por utilizar a calculadora :) Volte sempre que precisar!----------");

    return 0; 
}