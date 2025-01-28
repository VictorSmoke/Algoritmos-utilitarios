//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
	
	 main(void)
	
	
{
	
	setlocale(LC_ALL, "Portuguese");
	
//declaração de variáveis.

	int H=0, S=0, M=0, i=0;

//comandos.

do {
	system("cls");
	
	printf("Cronometro.\n\n");
	
	printf("\n\t\t\t\t Horas | Minutos | Segundos\n\n");
	printf("\n\t\t\t\t___________________________\n\n");	
	printf("\n\t\t\t\t   %d   :    %d    :    %d  \n",H,M,S);
	printf("\n\t\t\t\t___________________________\n\n");
	
		
		if(S==60){
			S++;	
		}
		if (S==60){
			S=0;
			M++;
		}
		if(M==60){
			M=0;
			H++;
		}
		if(H==24){
			H=0;
		}
		
		sleep(1);
		S++;

	

	} while (i==0);
	
	
	return 0;
}

















	















































