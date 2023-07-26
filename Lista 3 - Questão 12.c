#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 12. Faça um programa que receba o preço de um produto e seu código de origem e
mostre sua procedência. A procedência obedece à tabela a seguir.
*/

int main(){
	setlocale(LC_ALL, "");
	int codigo;
	float preco;
	
  	printf("Informe o preço do produto: ");
  	scanf("%f", &preco);

  	printf("informe o código de origem :");
  	scanf("%i", &codigo);
	
	switch(codigo){
	  	case 1:
	  		printf("PROCEDÊNCIA = SUL \n\n ");
		break; 
			 
	  	case 2:	
			printf("PROCEDÊNCIA = NORTE \n\n ");	
        break;
	    
	  	case 3:
	  		printf("PROCEDÊNCIA = LESTE \n\n");
	  	break;
	  	
	  	case 4:
	  		printf("PROCEDÊNCIA = OESTE \n\n");
   	    break;
	    
	    case 5:
   	    case 6:
	    	printf("PROCEDÊNCIA = NORDESTE \n\n ");
 	    break;
	    
	    case 7:
   	    case 8:
	    case 9:
	    	printf("PROCEDÊNCIA = SUDESTE \n\n");
 	    break;
	    
	    case 10:
	    	printf("PROCEDÊNCIA = CENTRO-OESTE \n\n");
        break;
   	   
   	    default:
   	   	    printf("PROCEDÊNCIA = código não encontrado :( ");
        break;
  	}
	
  	system("pause");
 return(0);
}