//bibliotecas

	#include <stdio.h>
	#include <locale.h>
		
	main()
	
	
{
	setlocale(LC_ALL, "Portuguese");


//declarações de variáveis.


	int anos, meses, dias, anosT, mesesT, diasT;
	
//coleta de dados.
	
	printf("por favor digite sua idade:");
	scanf("%d", &anos);
	
	printf("por favor digite o número do mês do seu aniversário:");
	scanf("%d", &meses);
	
	printf("por favor digite o dia do seu aniversário:");
	scanf("%d", &dias);

//cálculos com dados fornecidos.

	anosT=(anos*360);
	mesesT=(meses*30);
	diasT=(anosT+mesesT+dias);
	
	
//exibição de resultados.

	
	printf("dias de vida totais: %d.", diasT);















	return 0;

}
