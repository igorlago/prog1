#include<stdio.h>
int main()
{
	float notas[10];
	float media, soma=0;
	int	  i, maior=0;
	
	//passo 1:ler todas as notas e preencher os elementos do vetor
	for(i=0;i<10;i++)
	{
		printf("Entre com a nota do aluno %d: ",i+1);
		scanf("%f",&notas[i]);
		soma = soma + notas[i];
		}
	//passo2: calcular media
	media = soma / i;
	
	//passo 3: percorrer o vetor e contar as notas>media
	for(i=0;i<10;i++)
	{
		if(notas[i] > media)
		 maior++;
		}	
		printf("\n Media da turma = %.2f", media);
		printf("\n Quantidade de alunos com notas maior que media = %d \n",maior);
	system("pause");
	return 0;	
}
