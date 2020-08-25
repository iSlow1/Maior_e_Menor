Escreva um programa que receba 5 números inteiros e apresente o maior e o menor.

#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale (LC_ALL, "Portuguese"); 	
 	int num[5];
 	int i, numMaior, numMenor;
 	
 	i =0;
 	
 	 while (i < 5)
	  {
	  	printf ("Digite o %d ° número: ", i);
	  	scanf("%d", &num[i]);
	  	i++;
	  }
	  i = 0;
	  numMaior = num[0];
	  numMenor = num[0];
	  while (i < 5)
	  {
	  	if (num[i] > numMaior)
		  {
		  	numMaior = num[i];
		  }
	  	if (num[i] < numMenor)
		  {
		  	numMenor = num[i];
		  }
	  	i++;
	  }
	  
	  printf("O maior número digitado é: %d \n", numMaior);
 	  printf("O menor número digitado é: %d \n", numMenor);
 	
	return 0;
}