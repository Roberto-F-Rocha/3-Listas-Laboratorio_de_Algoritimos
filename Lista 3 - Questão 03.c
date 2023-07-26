#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 03. Crie um programa para identificar se um número real é positivo ou negativo.
*/

int main(){
	setlocale(LC_ALL, "");
	 
	float n1; 
	printf("informe um número real: ");
	scanf("%f", &n1);
	  
    n1 < 0 ? printf("esse número é negativo\n\n") : printf("esse número é positivo\n\n");
    
  	system("pause");
 return(0);
}