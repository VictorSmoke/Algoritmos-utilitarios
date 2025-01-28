//bibliotecas.
#include <stdio.h>
#include <locale.h>
		
	main()
	
	
{
	setlocale(LC_ALL, "Portuguese");
	
//declaração de variáveis.

 	int N1, N2, N3=0;
 	int N=0;

//coleta de dados.

	printf("iremos fazer uma contagem de números para você. digite o número que terminará a contagem:\n");
	scanf("%d", &N1);
	
//comando.
	
	N3=N2+N1;
	
	while(N <=N1-1){
		
	printf("%d, ",N);
	N=N+1;
	
	
}

	printf("%d.",N3);



























































return 0;
}
