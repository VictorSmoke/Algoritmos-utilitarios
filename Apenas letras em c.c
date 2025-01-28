//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
#include <conio.h>
#include <ctype.h>

	int som(){

	Beep(880, 100);		

	}

	int main(){

//declara��o de variaveis.

	char C,dig[50];
	int S=0,i=0;

//coleta de dados.
	
	
	printf("Digite seu nome:");
	
	do{

		som();
		C=getch();
		if (isalpha(C)!=0 || C==32){

			dig[i] = C;
			i++;
			printf ("%c", C);

		}

		else if (C==8&&i){
			
			dig[i]='\0';
			i--;
			printf("\b \b");

		}

	}while(C!=13);
	dig[i]='\0';
	S=dig;



//exibi��o de resultados.

	system("cls");
	printf("seu nome �:%s.\n\n",S);

	return 0;
}


