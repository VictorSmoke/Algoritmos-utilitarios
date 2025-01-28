//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		

		
	int main(void){
	


	setlocale(LC_ALL, "Portuguese");//tradução para português.
	SetConsoleTitle("Relogio digital");//mudança de título.
	system("color F0");//mudança de fonte e fundo.
	
//declaração de variáveis.

	int H=0, H2=0, M2=0, S2=0, S=0, M=0, i2=0, i=0, CR, B, P=0, U, T1, T2, T3, D=0, H3=0, M3=0, S3=0, A1=0, A2=0, A3=0, N=0,N2,N3,N4,N5,N6,N7,N8;
	char C,C2,C3,C4,C5,C6,C7,C8;
	char dig[50],dig2[50],dig3[50],dig4[50],dig5[50],dig6[50],dig7[50],dig8[50];

	
	CR=0;
	
//loop do menu.


	do{
	CR=0;	
	N=0;
	N2=0;
	N3=0;
	N4=0;
	N5=0;
	N6=0;
	N7=0;
	N8=0;
	system("cls");
	printf("Bem-vindo ao relógio digital. Para acessar as funções abaixo, pressione o número correspondente.\n");
	printf("\n");
	printf("Relógio 1\n\n");
	printf("Cronometro 2\n\n");
	printf("Alarmes 3\n\n");
	printf(":");
	
	do 
	{
		som();
		C=getch();
		if (isdigit(C)!=0)
		
		{
			dig[N] = C;
			N++;
			printf ("%c", C);
	
		}
	 
		else if (C==8&&N)	
		
		{
			
			dig[N]='\0';
			N--;
			printf("\b \b");
		}
	
	}		 
			while(C!=13);
		 	
		 	dig[N]='\0';
		 	CR = atoi(dig);
	
	system("cls");
	
	if(CR<1 || CR>9){//este if controla a digitação do usuário e faz ele digitar valores compativeis.
		

	N=0;
	N2=0;
	N3=0;
	N4=0;
	N5=0;
	CR=0;
	printf("Número inválido! Aperte qualquer tecla para voltar ao menu.\n");
	getch();

	
	}
	
	
	
	
	
	
	
//relógio.

	if(CR==1){
	
	N=0;//zerando valores de N para impedir a ocorrência de bugs nos dados fornecidos pelo usuário.
	N2=0;
	N3=0;
	N4=0;
	N5=0;
	
	printf("Ajuste a hora!\n");
	printf("OBS: Qualquer segundo acima de 60, minuto acima de 60 ou horas acima de 24, serão ajustados automaticamente.\n");
	printf("Digite as horas em que o relógio irá contar:");
	
	do 
	{
		som();
		C2=getch();
		if (isdigit(C2)!=0)
		
		{
			dig2[N2] = C2;
			N2++;
			printf ("%c", C2);
	
		}
	 
		else if (C2==8&&N2)	
		
		{
			
			dig2[N2]='\0';
			N2--;
			printf("\b \b");
		}
	
	}		 
			while(C2!=13);
		 	
		 	dig2[N2]='\0';
		 	H = atoi(dig2);
	
	printf("\nDigite os minutos em que o relógio irá contar:");


	do 
	{
		som();
		C3=getch();
		if (isdigit(C3)!=0)
		
		{
			dig3[N3] = C3;
			N3++;
			printf ("%c", C3);
	
		}
	 
		else if (C3==8&&N3)	
		
		{
			
			dig3[N3]='\0';
			N3--;
			printf("\b \b");
		}
	
	}		 
			while(C3!=13);
		 	
		 	dig3[N3]='\0';
		 	M = atoi(dig3);
	
	
	
	printf("\nDigite os segundos em que o relógio irá contar:");

	do 
	{
		som();
		C4=getch();
		if (isdigit(C4)!=0)
		
		{
			dig4[N4] = C4;
			N4++;
			printf ("%c", C4);
	
		}
	 
		else if (C4==8&&N4)	
		
		{
			
			dig4[N4]='\0';
			N4--;
			printf("\b \b");
		}
	
	}		 
			while(C4!=13);
		 	
		 	dig4[N4]='\0';
		 	S = atoi(dig4);
	
	//reajustando valores fora do padrão.
	if(A3>24){
	A3=24; 
	}
	if(A2>60){
	A2=60; 
	}
	if(A1>60){
	A1=60; 
	}
	if(H>24){
	H=24;
	}
	if(H2>24){
	H2=24;
	}
	if(M2>60){
	M2=60;
	}
	if(M>60){
	M=60;
	}
	if(S>60){
	S=60;
	}
	if(S2>60){
	S2=60;
	}
	 
	T1=H;	
	T2=M;	
	T3=S;
	
	i=0;
	U=1;
	
	while(i<1){
		
		
		
//os ifs faram a conversão dos segundos em minutos e por sua vez em horas.
		
		if(S>=0 && S<60){
			sleep(1);
			++S;
				
		}
		if (S==60){
			S=0;
			++M;
		}
		if(M==60 || M>60){
			M=0;
			++H;
		}
		if(H==24 || H>24){
			H=0;
			++D;
		}
		
		system("cls");	
		
	printf("Relógio.\n\n");
	printf("Horário ajustado\n\n");
	printf("   %d   :    %d    :    %d  \n\n",T1,T2,T3);//exibindo horário no qual o relógio deve parar.
	printf("	Dias | Horas | Minutos | Segundos\n");
	printf("    _________________________________________\n");	
	printf("         %d   :   %d   :   %d     :    %d  \n",D,H,M,S);
	printf("    _________________________________________\n");
	
	if(B==1){
		
		printf("Alarme definido para %d horas, %d minutos e %d segundos.\n",A3,A2,A1);
		
		if(H==A3 && A2==M && A1==S){
	system("cls");	
	printf("Relógio.\n\n");
	printf("Horário ajustado\n\n");
	printf("   %d   :    %d    :    %d  \n\n",T1,T2,T3);//exibindo horário no qual o relógio foi ajustado.
	printf("	Dias | Horas | Minutos | Segundos\n");
	printf("    _________________________________________\n");	
	printf("         %d   :   %d   :   %d     :    %d  \n",D,A3,A2,A1);
	printf("    _________________________________________\n");
	printf("Alarmando...\n");
	
	
	printf("pressione qualquer tecla para sair...\n");
	getch();
	i=1;
	B=0;
	
		}
		
	}
	
}//loop de contagem do relógio.

}//loop do relógio.

	if(CR==2){

//será feito novamente uma coleta de dados controladas por if's, while's e do's.

	printf("pressione qualquer tecla para iniciar o cronometro... ");
	getch();

do {
		
	system("cls");//após cada coleta, é necessário usar o system cls para limpar os textos exibidos anteriormente.
//feito isso podemos iniciar o cronometro.
	printf("Cronometro.\n\n");
	printf("\n\t\t\t\t Horas | Minutos | Segundos\n");
	printf("\n\t\t\t\t___________________________\n");	
	printf("\n\t\t\t\t   %d   |    %d    |    %d  \n",H2,M2,S2);
	printf("\n\t\t\t\t___________________________\n");
	
		
			
		
		if (S2==60){
			S2=0;
			M2++;
		}
		if(M2==60){
			M2=0;
			H2++;
		}
		if(H2==24){
			H2=0;
		}
		
		sleep(1);
		S2++;
		
} while (i==0);

}

	if(CR==3){
		
	while(i<1){
		
		N5=0;
		N6=0;
		N7=0;
		
		system("cls");
		printf("Defina um alarme para o relógio.\n");
		printf("Horas:");
		
		do 
	{
		som();
		C5=getch();
		if (isdigit(C5)!=0)
		
		{
			dig5[N5] = C5;
			N5++;
			printf ("%c", C5);
	
		}
	 
		else if (C5==8&&N5)	
		
		{
			
			dig5[N5]='\0';
			N5--;
			printf("\b \b");
		}
	
	}		 
			while(C5!=13);
		 	
		 	dig5[N5]='\0';
		 	A3 = atoi(dig5);
	
		printf("\nMinutos:");
		
		do 
	{
		som();
		C6=getch();
		if (isdigit(C6)!=0)
		
		{
			dig6[N6] = C6;
			N6++;
			printf ("%c", C6);
	
		}
	 
		else if (C6==8&&N6)	
		
		{
			
			dig6[N6]='\0';
			N6--;
			printf("\b \b");
		}
	
	}		 
			while(C6!=13);
		 	
		 	dig6[N6]='\0';
		 	A2 = atoi(dig6);
	
		printf("\nSegundos:");
		
		do 
	{
		som();
		C7=getch();
		if (isdigit(C7)!=0)
		
		{
			dig7[N7] = C7;
			N7++;
			printf ("%c", C7);
	
		}
	 
		else if (C7==8&&N7)	
		
		{
			
			dig7[N7]='\0';
			N7--;
			printf("\b \b");
		}
	
	}		 
			while(C7!=13);
		 	
		 	dig7[N7]='\0';
		 	A1 = atoi(dig7);
	
	system("cls");
	printf("Alarme definido com sucesso! Deseja editalo? Sim:0 Não:1\n");
	printf(":");
	
	do 
	{
		som();
		C8=getch();
		if (isdigit(C8)!=0)
		
		{
			dig8[N8] = C8;
			N8++;
			printf ("%c", C8);
	
		}
	 
		else if (C8==8&&N8)	
		
		{
			
			dig8[N8]='\0';
			N8--;
			printf("\b \b");
		}
	
	}		 
			while(C8!=13);
		 	
		 	dig8[N8]='\0';
		 	i = atoi(dig8);
	
	B=1;
	U=1;
	
	}//loop do alarme para confirmação e edição dos dados fornecidos.
	
	
	
	}//alarmes

}while(CR!=9);//loop do menu.



return 0;

}//parentese de conjunto inicial.

int som() {//som utilizado na digitação.
	
	Beep(880, 100);	
	
}
