//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
#include <conio.h>
#include <ctype.h>



	int main()
	
{

	setlocale(LC_ALL, "Portuguese");
	
	
//declaração de variaveis.

	char nome[20];
	int i=0;

//coleta de dados.

	printf("DIGITE O SEU NOME: \n");
	scanf("%s", nome);
	fflush(stdin);
	
//exibição.

	system("cls");
	printf("NOME:");
	puts(nome);


	return 0;
}

	int som(){
		
		Beep(880, 100);		
		
	}
