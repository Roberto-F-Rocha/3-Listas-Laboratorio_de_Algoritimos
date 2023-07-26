#include <stdio.h>
#include <stdlib.h>

/*
Exercício 07. Crie um algoritmo que imprima o gênero de uma pessoa utilizando um dos
caracteres M ou F como entrada. Considere que as letras podem ser minúsculas ou
maiúsculas.
*/

int main(){
	char sexo;
	
	printf("Informe o seu sexo: (m) ou (f)");
	scanf("%c", &sexo);
	
	switch(sexo){
		case 'M':
		case 'm':
			printf("Sexo masculino\n\n"); 		
		break;

		case 'F':
		case 'f':
			printf("Sexo feminino\n\n"); 	
		break;
	}
	
    system("pause");
 return(0);
}