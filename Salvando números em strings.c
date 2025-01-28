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

	int X[50], g=1;
	
//sauvando dados em strings.

	X[1]=13;		X[6]=33;
	X[2]=22;		X[7]=5;
	X[3]=55;		X[8]=10;
	X[4]=25;		
	X[5]=11;	

		while(g <= 8){
			
			printf("Valor dentro da string: %d dentro de X é: %d.\r\n", g, X[g]);
			g=g+1;
			
		}
































	return 0;
}




