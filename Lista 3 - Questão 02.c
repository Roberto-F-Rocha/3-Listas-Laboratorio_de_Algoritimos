#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 02. Crie um programa para identificar se um número é igual ou diferente de 4.
*/

int main(){
	setlocale(LC_ALL, "");
	int numero;
	
  	printf("informe um número: ");
	scanf("%i", &numero);

  	numero == 4 ? printf("Numero igual a 4\n\n") : printf("Numero nao eh igual a 4\n\n");
	
  	system("pause");
 return(0);
}