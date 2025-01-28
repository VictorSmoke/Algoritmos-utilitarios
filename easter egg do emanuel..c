#include <stdio.h>
#include <locale.h>

int main()
{
	//Traduzindo o compilador
	setlocale(LC_ALL, "Portuguese");
	
	//Declarando variáveis
	int Ns;
	char*Ds = "Ômega";
	
	//Explicando o propósito
	printf("O objetivo do seguinte 'programa' é responder qual é o dia da semana correspondente ao número digitado. \n");
	printf("Tente encontrar o número que desbloqueia a mensagem secreta! \n");
	
	do
	{
		//Solicitando as informações
		printf("Informe um valor de 1-7: ");
		scanf("%d", &Ns);
	
		//Verificando as condições e alocando as informações
		switch (Ns)
		{
			case 0:
				printf("Desbloqueando mensagem secreta... \n");
			break;
			
			case 1:
				Ds = "Domingo";
			break;
		
			case 2:
				Ds = "Segunda-feira";
			break;
		
			case 3:
				Ds = "Terça-feira";
			break;
		
			case 4:
				Ds = "Quarta-feira";
			break;
		
			case 5:
				Ds = "Quinta-feira";
			break;
		
			case 6:
				Ds = "Sexta-feira";
			break;
		
			case 7:
				Ds = "Sabado";
			break;
		
			default:
				printf("Dia não reconhecido. O programa se reiniciará automaticamente. \n");
			break;
	}
	
	//Imprimindo o resultado
	if (Ns != 0)
	{
		if (Ns > 7 || Ns < 0)
		{
			printf ("(O número secreto não foi encontrado. Tente novamente) \n");
		}
		else
		{
		printf ("O dia número %d da semana é correspondente a %s \n", Ns, Ds);
		printf ("O número secreto não foi encontrado. Tente novamente \n");
		}
	}
	
	}
	while (Ns != 0);
	
	//?
	printf("Mensagem secreta desbloqueada! \n");
	printf("https://www.youtube.com/watch?v=fC7oUOUEEi4");
	
	//Encerrando o programa
	return 0;
}
