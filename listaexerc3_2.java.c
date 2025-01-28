//bibliotecas

	#include <stdio.h>
	#include <locale.h>
		
	main()
	
	
{
	
setlocale(LC_ALL, "Portuguese");	
	
//declaração de variáveis.

	float IMC, peso, altura;

//coleta de dados.

	printf("informe sua altura:");
	scanf("%f", &altura);
	printf("informe seu peso:");
	scanf("%f", &peso);
	
//calculo com dados fornecidos.

	IMC= peso/(altura*altura);

//exibição de resultado.	

	printf("seu IMC é:%.2f.\n",IMC);
	printf("Condição	                IMC masculno	  IMC feminino\n");
	printf("abaixo do peso	                   <19,1	     <20,7\n");
	printf("peso normal                     19,1 - 25,8	  20,7 - 26,4\n");
	printf("marginalmente acima do peso	25,8 - 27,3       26,4 - 27,8\n");
	printf("acima do peso ideal             27,3 - 32,3	  27,8 - 31,1\n");
	printf("obeso                              >32,3	     1,>31,1\n");


























































return 0;
}
