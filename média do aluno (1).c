//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
#include <conio.h>
#include <ctype.h>
 
 	float media_escolar=6;
 	float media_recuperacao=2;
 
	float calcula(float N1, float N2, float N3, float N4){//fu��o para calculo de m�dia
		
	return (N1+N2+N3+N4)/4;//calculo.
		
	}

	void verificacao(float media){
	
	if(media>=media_escolar){
		
		printf("APROVADO!\r\n");
		
		} else if (media<media_escolar && media>=media_recuperacao){
		
			printf("RECUPERA��O!\r\n");
		
			} else if (media<media_recuperacao){
				
				printf("REPROVADO!\r\n");
				
			}	
			
	}

	int som(){
		
		
	Beep(880, 100);	
	
	}
	void main()//programa principal
	
{

	setlocale(LC_ALL, "Portuguese");//tradu��o.
	SetConsoleTitle("CALCULAR NOTA IFRN");//t�tulo do console.
	
//declara��o de variaveis .

	float media=0, N1, N2, N3, N4;
	int i=0;

	while(i<1){//loop para reutiliza��o.
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 160 );//mudan�a de fonte.
	system("color 2f");//alterando plano de fundo.
	
	media=0;
	N1=0;
	N2=0;
	N3=0;
	N4=0;
	
		system("cls");//limpa tela.
	
	//coleta de dados.
	
		som();
	
		printf("Informe nota 1.\r\n");
		scanf("%f",&N1);
		fflush(stdin);
		som();
		
		system("cls");//limpa tela.
	
		printf("Informe nota 2.\r\n");
		scanf("%f",&N2);
		fflush(stdin);
		som();
		
		system("cls");
	
		printf("Informe nota 3.\r\n");
		scanf("%f",&N3);
		fflush(stdin);
		som();
			
		system("cls");
	
		printf("Informe nota 4.\r\n");
		scanf("%f",&N4);
		fflush(stdin);
		som();
			
		media=calcula(N1, N2, N3, N4);//injetando valores.
	
		system("cls");
	
		printf("M�dia:%f.\r\n",media);//exibi��o de resultados.
		verificacao(media);
		getch();//pausa.
	
	}
	
}












