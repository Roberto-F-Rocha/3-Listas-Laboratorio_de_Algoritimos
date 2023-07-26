#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 13. Crie um programa que receba o preço, a categoria 

1 – limpeza; 
2 – alimentação;
3 – vestuário e a situação; 
R – produtos que necessitam de refrigeração;
N – produtos que não necessitam de refrigeração; 

Calcule e mostre:
*/

int main(){
	setlocale(LC_ALL, "");
	int c;
	float preco;
	
  	printf("Informe o preço do produto: ");
  	scanf("%f", &preco);

  	printf("informe a categoria do produto:");
  	scanf("%i", &c);
  	
  	preco <= 25 && c == 1 ? printf("valor R$%.2f\n\n", preco + (preco * 0.05)) : printf("valor R$%.2f\n\n", preco + (preco * 0.12));
  	system("pause");
  	return(0);

  	preco <= 25 && c == 2 ? printf("valor R$%.2f\n\n", preco + (preco * 0.08)) : printf("valor R$%.2f\n\n", preco + (preco * 0.15));
  	system("pause");
  	return(0);

  	preco <= 25 && c == 3 ? printf("valor R$%.2f\n\n", preco + (preco * 0.10)) : printf("valor R$%.2f\n\n", preco + (preco * 0.18));  
    	
  	system("pause");
 return(0);
}