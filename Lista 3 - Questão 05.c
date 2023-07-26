#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 05. Crie um programa que leia dois números e identifique qual deles é o maior.
*/

int main(){
	setlocale(LC_ALL, "");
	  
	int n1, n2; 

	printf("vamos saber se o numero é maior \ninforme um número: ");
	scanf("%i", &n1);

	printf("informe outro número:");
	scanf("%i", &n2);
	  
	n1 > n2 ? printf("\n%i é maior que %i\n\n",n1,n2) : printf("\n%i é maior que %i\n\n",n2,n1);
	  
  	system("pause");
 return(0);
}