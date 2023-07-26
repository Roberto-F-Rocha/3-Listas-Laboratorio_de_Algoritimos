#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 10. Uma loja fornece 8% de desconto para funcionários e 12% de desconto para
clientes vips. Faça um programa que calcule o valor total a ser pago por uma pessoa. O
programa deverá ler o valor total da compra efetuada e um código que identifique se o
comprador é um cliente comum (1), funcionário (2) ou vip (3).
*/

int main(){
	setlocale(LC_ALL, "");
    
    float valor;
    int escolha;
    
    printf("valor total da compra efetuada\n R$:"); 
    scanf("%f", &valor);

    printf("insira o código: \n\n cliente comum = (1) \n\n funcionário = (2) \n\n vip = (3)\n\n");
    scanf("%i", &escolha);

    switch(escolha){
		case 1:
			printf("\nvalor total da compra R$%.2f\n\n", valor);
		break;

		case 2:
			printf("\nvalor total da compra com o desconto de 8 porcentos R$%.2f\n\n", valor - (valor * 0.08));
		break;

        case 3:
    	    printf("\nvalor total da compra com o desconto de 12 porcentos R$%.2fn\n", valor - (valor * 0.12));
		break;
	}

  	system("pause"); 
 return(0);
}