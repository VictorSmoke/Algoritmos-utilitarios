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
	
 void main(){
 
	setlocale(LC_ALL, "Portuguese");//tradução.

	
//declaração de variaveis .

	int N;
	float NR=0;
	int i=0;
	char C;
	char dig[50];


		while(i<1){//loop para reutilização.
	
	N=0;//zerando variável.
	
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 160 );//mudança de fonte.
	system("color 2f");//alterando plano de fundo.
	
	printf("Digite um número real.\r\n");
	printf(":");
	
	do 
	{
		som();
		C=getch();
		if (isdigit(C)!=0)
		
		{
			dig[N] = C;
			N++;
			printf ("%c", C);
	
		}
	 
		else if (C==8&&N)	
		
		{
			
			dig[N]='\0';
			N--;
			printf("\b \b");
		}
	
		else if (C==44)	
		
		{
			
			dig[N] = C;
			N++;
			printf("%c", C);
		}
	
	}		 
			while(C!=13);
		 	
		 	dig[N]='\0';
		 	NR = atof(dig);
	
		system("cls");
		printf("Exibindo:%.2f.",NR);
		getch();
	
	
		}

}
