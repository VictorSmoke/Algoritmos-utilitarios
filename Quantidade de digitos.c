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

void main()//programa principal
	
{

	setlocale(LC_ALL, "Portuguese");//tradução.
	
	
//declaração de variaveis .

	char C;
	char dig[50];
	int N=0, Cont=0;
	float N1=0;
	
//coleta de dados.

	printf("Digite um número:");
	
	Cont--;
	
		do 
	{
		som();
		Cont+=1;
		C=getch();
		if (isdigit(C)!=0)
		
		{
			dig[N] = C;
			N++;
			printf ("%c", C);
	
		}
	 
		else if (C==8 && N)	
		
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
		 	N1 = atof(dig);
		
	printf("\r\n");
	printf("Valor:%f. Quantidade de digitos:%i.",N1, Cont);
	
}
	
	
	

