//bibliotecas.
#include <stdio.h>
#include <locale.h>
		
	main()
	
	
{
	setlocale(LC_ALL, "Portuguese");
	
//declara��o de vari�veis.

float N1,N2,N3;

//coleta de dados.

printf("digite tr�s n�meros e diremos qual deles � o maior\n");
printf("digite o primeiro n�mero:");
scanf("%f", &N1);
printf("digite o segundo n�mero:");
scanf("%f", &N2);
printf("digite o terceiro n�mero:");
scanf("%f", &N3);

if (N1> N2 && N1> N3) {
	
	printf("este � o maior n�mero:%.2f",N1);
	
}

if (N2> N1 && N2> N3) {
	
	printf("este � o maior n�mero:%.2f",N2);
	
}

if (N3> N1 && N3> N2) {
	
	printf("este � o maior n�mero:%.2f",N3);
	
}










































return 0;
}
