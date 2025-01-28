//bibliotecas.
#include <stdio.h>
#include <locale.h>

		
	int main(){

	setlocale(LC_ALL, "Portuguese");

//declaração de variáveis.

	int H=0, S=0, M=0, i=0;
//coleta de dados.
	
	printf("ajuste a hora!\n");
	printf("digite as horas em que o relógio irá contar:");
	scanf("%d",&H);
	printf("digite os minutos em que o relógio irá contar:");
	scanf("%d",&M);
	printf("digite os segundos em que o relógio irá contar:");
	scanf("%d",&S);
	
//comando.

	while(i<1){
		
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
		
	printf("	Horas | Minutos | Segundos\n");
	printf("       ___________________________\n");	
	printf("	  %d   :    %d    :    %d  \n",H,M,S);
	printf("       ___________________________\n");
		
}





































return 0;
}
