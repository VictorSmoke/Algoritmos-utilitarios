//bibliotecas

	#include <stdio.h>
	#include <locale.h>
		
	main()
	
	
{
	
setlocale(LC_ALL, "Portuguese");	
	
//declara��o de vari�veis.

	float IMC, peso, altura;
	int genero;
	
//coleta de dados.
	
	
	printf("informe o seu g�nero biol�gico, tendo como op��es feminino e masculino.\n");
	printf("1 para feminino e 2 para masculino:");
	scanf("%d", &genero);
	printf("informe sua altura:");
	scanf("%f", &altura);
	printf("informe seu peso:");
	scanf("%f", &peso);
	
//calculo com dados fornecidos.

	IMC= peso/(altura*altura);

//exibi��o de resultado.	

if (genero==1) {
	
	printf("seu IMC �:%.2f.\n",IMC);
	printf("Condi��o	                	  IMC feminino\n");
	printf("abaixo do peso	                   	     <20,7\n");
	printf("peso normal                     	  20,7 - 26,4\n");
	printf("marginalmente acima do peso	          26,4 - 27,8\n");
	printf("acima do peso ideal             	  27,8 - 31,1\n");
	printf("obeso                              	     >31,1\n");
	
} else {
	
    printf("seu IMC �:%.2f.\n",IMC);
	printf("Condi��o	                IMC masculno	  \n");
	printf("abaixo do peso	                   <19,1	     \n");
	printf("peso normal                     19,1 - 25,8	  \n");
	printf("marginalmente acima do peso	25,8 - 27,3       \n");
	printf("acima do peso ideal             27,3 - 32,3	  \n");
	printf("obeso                              >32,3	  \n");
    
}



	
	
	
	
	
	
	
	
	
	
	
	
	
	








		










































































return 0;
}
