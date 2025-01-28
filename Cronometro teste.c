//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
	main()
	
	
{
	setlocale(LC_ALL, "Portuguese");
	setConsoleTitle("Cronometro");
//declaração de variáveis.

	int H=0, S=0, M=0, i=0;

//comandos.

do {
	system("cls");
	
	printf("Cronometro\n\n");
	
	printf("	Horas | Minutos | Segundos\n");
	printf("       ___________________________\n");	
	printf("	  %d   :    %d    :    %d  \n",H,M,S);
	printf("       ___________________________\n");
	
		
		if(S>=0 && S<60){
			++S;	
		}
		if (S==60){
			S=0;
			++M;
		}
		if(M==60){
			M=0;
			++H;
		}
		if(H==24){
			H=0;
		}
		sleep(1000);
		S++;

	while(i<1);
	
	system("pause");
}













}



	













































return 0;
}
