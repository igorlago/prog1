#include <stdio.h>

int main()
{
    //ler 2numeros e imprimir resultados; saisa que sub=subtração, div=divisão, mult=multiplicação
    int n1,n2;
    float soma,sub,div,mult;

    printf("\nDigite um numero:");
    scanf("%d",&n1);
    printf("\nDigite um outro numero:");
    scanf("%d",&n2);

    soma = n1+n2;
    sub  = n1-n2;
    div  = (float)n1/n2;
    mult = n1*n2;
           
    printf("\nA soma %d + %d = %.0f\n",n1,n2,soma);
    printf("\nA subtracao %d - %d = %.0f\n",n1,n2,sub);
    printf("\nA divisao %d / %d = %.2f\n",n1,n2,div);
    printf("\nA multiplicacao %d x %d = %.0f\n\n",n1,n2,mult);

    //getch();
    system("pause");

    return 0;
}
