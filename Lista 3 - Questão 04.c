#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 04. Crie um programa para verificar se um número é maior ou menor do que 8,8.
*/

int main(){
	setlocale(LC_ALL, "");
	  
	float n1; 
	printf("vamos saber se o numero é maior que 8,8 \ninforme um número: ");
	scanf("%f", &n1);
	  
    n1 < 8.8 ? printf("esse número é menor que 8,8\n\n") : printf("esse número é maior que 8,8\n\n");
    
	  
  	system("pause");
 return(0);
}