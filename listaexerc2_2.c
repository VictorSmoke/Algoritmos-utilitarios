//bibliotecas

	#include <stdio.h>
	#include <locale.h>
		
	main()
	
	
{
	setlocale(LC_ALL, "Portuguese");


//declara��es de vari�veis.


	int anos, meses, dias, anosT, mesesT, diasT;
	
//coleta de dados.
	
	printf("por favor digite sua idade:");
	scanf("%d", &anos);
	
	printf("por favor digite o n�mero do m�s do seu anivers�rio:");
	scanf("%d", &meses);
	
	printf("por favor digite o dia do seu anivers�rio:");
	scanf("%d", &dias);

//c�lculos com dados fornecidos.

	anosT=(anos*360);
	mesesT=(meses*30);
	diasT=(anosT+mesesT+dias);
	
	
//exibi��o de resultados.

	
	printf("dias de vida totais: %d.", diasT);















	return 0;

}
