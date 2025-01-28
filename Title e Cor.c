//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

	
	int	main()
	
	
{
	setlocale(LC_ALL, "Portuguese");

	
//declaração de variáveis.

 	int i=0,N=0,a=0;

//cor das letras e do prompt.

	SetConsoleTitle("FEITO POR CARVALHO");

	printf("pausa");
	getchar();

	system("color 4f");


//LOOP.

	

	for(a=0; a<256; a++){

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a );
	printf("CARVALHO %d\t\t\t\n\n",a);	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
