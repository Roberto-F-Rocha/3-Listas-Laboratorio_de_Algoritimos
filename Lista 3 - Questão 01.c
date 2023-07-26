#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 01. Crie um programa para identificar se um número é par ou ímpar.
*/

int main(){
	setlocale(LC_ALL, "");
	  
	int numero;
	  
	printf("par ou impar?\n\ninforme um número: ");
  	scanf("%d", &numero);
	
  	numero % 2 == 0 ? printf("Numero par\n\n") : printf("Numero impar\n\n");
	
  	system("pause");
 return(0);
}
