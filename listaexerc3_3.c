//bibliotecas

	#include <stdio.h>
	#include <locale.h>
		
	main()
	
	
{
	setlocale(LC_ALL, "Portuguese");
	
//declaração de variáveis.

	int A1,A2,A3,L1,L2,L3;
	
//coleta de dados.

	printf("informe o primeiro lado:");
	scanf("%d", &A1);
	printf("informe o segundo lado lado:");
	scanf("%d", &A2);
	printf("informe o segundo lado lado:");
	scanf("%d", &A3);

//calculos com números fornecidos.	
	
	L1=(A3+A2);	
	L2=(A1+A3);
	L3=(A2+A1);
	
//estabelecendo condições.	

 if (A1 <=L1, A2 <=L2, A3 <=L3) {
 	
 	printf("esses podem ser lados de um triângulo.");
 	
 	
 	
 }	else {
 	
 	printf("esses não são lados de um triângulo!");
 	
 	
 }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
