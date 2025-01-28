//bibliotecas.
#include <stdio.h>
#include <locale.h>
		
	main()
	
	
{
	setlocale(LC_ALL, "Portuguese");
	
//declaração de variáveis.

	float RE;
	int R100,R50=0,R51,R10,R11,R5,RR5,RR1,R1;
	
//coleta de dados.

	printf("digite o valor em reais:");
	scanf("%f", &RE);
//calculos com dados fornecidos.

	R100=(RE/100);
	R50=(RE-(R100*100));
	R51=(R50/50);
	R11=(R50-(R51*50));
	R10=(R11/10);
	RR5=(R11-(R10*10));
	R5=(RR5/5);
	RR1=(RR5-(R5*5));
	R1=(RR1/1);
	
	printf("%d notas de 100 reais\n",R100);
	printf("%d notas de 50 reais\n",R51);
	printf("%d notas de 10 reais\n",R10);
	printf("%d notas de 1 reais\n",R1);






















































return 0;
}
