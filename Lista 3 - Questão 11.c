#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 11. A taxa de natalidade e a taxa de mortalidade são indicadores estatísticos de
fundamental importância por ajudar a compreender aquilo que os especialistas chamam de
dinâmica populacional e a entender sua relação com variáveis que influenciam o
desenvolvimento, como qualidade de vida, migrações, , fatores socioeconômicos e
localização. Sabendo disso, crie um programa que calcule os dois indicadores utilizando o
comando switch.
*/

int main(){
	setlocale(LC_ALL, "");
	  
	int habitantes, escolha;
	  
    float natalidade, mortalidade, igual;
    
    printf("número de habitantes\n\n");
    scanf("%i", &habitantes);

    system("cls");

    printf("informe o número de crianças nacidas\n\n");
    scanf("%f", &natalidade);

    system("cls");

    printf("informe o número de óbitos\n\n");
    scanf("%f", &mortalidade);

    system("cls");

    printf("escolha qual tipo de procedência você gostaria de visualizar\n\n");
    printf(" natalidade |1| \n mortalidade |2|\n");
    scanf("%i", &escolha);

    switch(escolha){
		case 1:
			igual = (natalidade * 1000) / habitantes;
			printf("taxa de natalidade igual a %f\n\n", igual);
		break;

		case 2:
			igual = (mortalidade * 1000) / habitantes;
			printf("taxa de mortalidade igual a %f\n\n", igual);
		break;
	}

  	system("pause");
 return(0);
}