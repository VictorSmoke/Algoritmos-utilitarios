#include <stdio.h>
#include <locale.h>

int main()
{
	//Traduzindo o compilador
	setlocale(LC_ALL, "Portuguese");
	
	//Declarando vari�veis
	int Ns;
	char*Ds = "�mega";
	
	//Explicando o prop�sito
	printf("O objetivo do seguinte 'programa' � responder qual � o dia da semana correspondente ao n�mero digitado. \n");
	printf("Tente encontrar o n�mero que desbloqueia a mensagem secreta! \n");
	
	do
	{
		//Solicitando as informa��es
		printf("Informe um valor de 1-7: ");
		scanf("%d", &Ns);
	
		//Verificando as condi��es e alocando as informa��es
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
				Ds = "Ter�a-feira";
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
				printf("Dia n�o reconhecido. O programa se reiniciar� automaticamente. \n");
			break;
	}
	
	//Imprimindo o resultado
	if (Ns != 0)
	{
		if (Ns > 7 || Ns < 0)
		{
			printf ("(O n�mero secreto n�o foi encontrado. Tente novamente) \n");
		}
		else
		{
		printf ("O dia n�mero %d da semana � correspondente a %s \n", Ns, Ds);
		printf ("O n�mero secreto n�o foi encontrado. Tente novamente \n");
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
