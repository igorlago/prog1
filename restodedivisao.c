#include <stdio.h>

 int main()
 
{
           int n1,n2;
           int resto;
           
           printf("\nEntre com n1:");
           scanf("%d", &n1);
           
           printf("\nEntre com n2:");
           scanf("%d", &n2);
           
           resto = n1 % n2;
           
           printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=");
           
           printf("\n resto da divisão de %d por %d = %d\n", n1,n2,resto);

           if (n1 % n2 == 0){
                  printf("\n %d e paran", resto); }

           else{
                 printf("\n %d e impar\n", resto);}

           printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
           
           system("pause");
           return 0;
}