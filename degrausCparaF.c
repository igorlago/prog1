#include <stdio.h>
         int main()
{
         float c,f;
         
         printf("coloque o numero em graus celsios:");
         scanf("%f",&c);

          f = (float)((c*1.8)+32);

          printf("\n==========================\n");
          printf("\n\n %.2f = %.2f\n",c,f);
          printf("\n==========================\n");

          //getch;
          system("pause");
          return 0;

}