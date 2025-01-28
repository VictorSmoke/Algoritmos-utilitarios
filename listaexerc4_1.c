//bibliotecas.
#include <stdio.h>
#include <locale.h>
		
	main()
	
	
{
	setlocale(LC_ALL, "Portuguese");
	
//declaração de variáveis.

float N1,N2,N3;

//coleta de dados.

printf("digite três números e diremos qual deles é o maior\n");
printf("digite o primeiro número:");
scanf("%f", &N1);
printf("digite o segundo número:");
scanf("%f", &N2);
printf("digite o terceiro número:");
scanf("%f", &N3);

if (N1> N2 && N1> N3) {
	
	printf("este é o maior número:%.2f",N1);
	
}

if (N2> N1 && N2> N3) {
	
	printf("este é o maior número:%.2f",N2);
	
}

if (N3> N1 && N3> N2) {
	
	printf("este é o maior número:%.2f",N3);
	
}










































return 0;
}
