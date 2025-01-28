//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
#include <conio.h>
#include <ctype.h>



	int main()
	
{

	setlocale(LC_ALL, "Portuguese");
	SetConsoleTitle("MERCADO DO COMUNISTA");
	
//declaração de variaveis.

	int R=0;
	int N=0,N2,N3,N5;
	int i=0, Q=0, C2=0, OP=0;
	int M1=0, M2=0, M3=0, M4=0, M5=0, M6=0, M7=0, M8=0, M9=0, M10=0, M11=0, M12=0;
	int Q1=0, Q2=0, Q3=0, Q4=0, Q5=0, Q6=0, Q7=0, Q8=0, Q9=0, Q10=0, Q11=0, Q12=0;
	float P1=11.50, P2=10.00, P3=3.00, P4=2.00, P5=999.99, P6=36.99, P7=39.99, P8=6.00, P9=7.00, P10=6.00, P11=10.00, P12=12.00, P=0, PF=0;	
	float N1;
	char C,C3,C4,C5;
	char dig[50],dig2[50],dig3[50],dig5[50];
		
//definindo cor de fundo.

	system("color 4f");
	
//menu em LOOP.
	
	while(i<1){
	system("cls");
	
	
	//definindo cor da fonte.
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 70 );

    N=0,N2=0,N3=0,N5=0;

	printf("##################################################################\n\n");
	printf(" #######                MERCADO COMUNISTA                 #######\n\n");
	printf("##################################################################\n\n");
	
	printf("Digite a opção desejada:\n\n");
	printf("1 - Comprar\n\n");
	printf("2 - Listar produtos\n\n");
	printf("3 - Sair\n\n");
	printf("4 - Verificar compras realizadas\n\n");

//condições de controle.

	{
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
		 	OP = atoi(dig);
	
	
	if(OP>4 || OP<1){
		som();
		N=0;
		system("cls");
		printf("NÚMERO INVÁLIDO, APERTE [ENTER] PARA VOLTAR!\n");
		getch();
		
	}
	
//estabelecendo condições.

	if(OP==1){
	

	N=0;
	system("cls");
	printf("Digite o código do produto:\n\n");
	
	do 
	{
		som();
		C3=getch();
		if (isdigit(C3)!=0)
		
		{
			dig2[N2] = C3;
			N2++;
			printf ("%c", C3);
	
		}
	 
		else if (C3==8&&N2)	
		
		{
			
			dig2[N2]='\0';
			N2--;
			printf("\b \b");
		}
	
	}		 
			while(C3!=13);
		 	
		 	dig2[N2]='\0';
		 	C2 = atoi(dig2);
	
	if(C2>12 || C2<1){
		system("cls");
		printf("DIGITE UM CÓDIGO VÁLIDO!\n\n");
		getch();
	} else{
	
	system("cls");	
	printf("Digite a quantidade do produto:\n\n");	
	
	do 
	{
		som();
		C4=getch();
		if (isdigit(C4)!=0)
		
		{
			dig3[N3] = C4;
			N3++;
			printf ("%c", C4);
	
		}
	 
		else if (C4==8&&N3)	
		
		{
			
			dig3[N3]='\0';
			N3--;
			printf("\b \b");
		}
	
	}		 
			while(C4!=13);
		
		 	dig3[N3]='\0';
		 	Q = atoi(dig3);
	
	}
	
	system("cls");
	
	if(C2==1){
		
		//cálculos.
		M1++;
		Q1+=Q;
		P=Q*P1;
		N=0;
		PF+=P;
		som();
		printf("produto escolhido: Hamburguer.\n\n");
		printf("Valor à pagar: R$%.2f.\n\n",P);
		printf("Aperte [ENTER] para voltar\n\n");
		getch();
	}

	if(C2==2){
		
		//cálculos.
		M2++;
		Q2+=Q;
		P=Q*P2;
		N=0;
		PF+=P;
		som();
		printf("produto escolhido: Refrigerente.\n\n");
		printf("Valor à pagar: R$%.2f.\n\n",P);
		printf("Aperte [ENTER] para voltar\n\n");
		getch();
	
	}

	if(C2==3){
		
		//cálculos.
		M3++;
		Q3+=Q;
		P=Q*P3;
		N=0;
		PF+=P;
		som();
		printf("produto escolhido: Coxinha.\n\n");
		printf("Valor à pagar: R$%.2f.\n\n",P);
		printf("Aperte [ENTER] para voltar\n\n");
		getch();
	
	}
	
	if(C2==4){
		
		//cálculos.
		M4++;
		Q4+=Q;
		P=Q*P4;
		N=0;
		PF+=P;
		som();
		printf("produto escolhido: Batata frita.\n\n");
		printf("Valor à pagar: R$%.2f.\n\n",P);
		printf("Aperte [ENTER] para voltar\n\n");
		getch();
	}
	
	if(C2==5){
		
		//cálculos.
		M5++;
		Q5+=Q;
		P=Q*P5;
		N=0;
		PF+=P;
		som();
		printf("produto escolhido: Picanha.\n\n");
		printf("Valor à pagar: R$%.2f.\n\n",P);
		printf("Aperte [ENTER] para voltar\n\n");
		getch();
	}

	if(C2==6){
		
		//cálculos.
		M6++;
		Q6+=Q;
		P=Q*P6;
		N=0;
		PF+=P;
		som();
		printf("produto escolhido: Cupim.\n\n");
		printf("Valor à pagar: R$%.2f.\n\n",P);
		printf("Aperte [ENTER] para voltar\n\n");
		getch();
	}
	
	if(C2==7){
		
		//cálculos.
		M7++;
		Q7+=Q;
		P=Q*P8;
		N=0;
		PF+=P;
		som();
		printf("produto escolhido: Mortadela.\n\n");
		printf("Valor à pagar: R$%.2f.\n\n",P);
		printf("Aperte [ENTER] para voltar\n\n");
		getch();
	}
	
	if(C2==8){
		
		//cálculos.
		M8++;
		Q8+=Q;
		P=Q*P7;
		N=0;
		PF+=P;
		som();
		printf("produto escolhido: Coxão mole.\n\n");
		printf("Valor à pagar: R$%.2f.\n\n",P);
		printf("Aperte [ENTER] para voltar\n\n");
		getch();
	}
	
	if(C2==9){
		
		//cálculos.
		M9++;
		Q9+=Q;
		P=Q*P9;
		N=0;
		PF+=P;
		som();
		printf("produto escolhido: Cenoura.\n\n");
		printf("Valor à pagar: R$%.2f.\n\n",P);
		printf("Aperte [ENTER] para voltar\n\n");
		getch();
	}
	
	if(C2==10){
		
		//cálculos.
		M10++;
		Q10+=Q;
		P=Q*P10;
		N=0;
		PF+=P;
		som();
		printf("produto escolhido: Jaca.\n\n");
		printf("Valor à pagar: R$%.2f.\n\n",P);
		printf("Aperte [ENTER] para voltar\n\n");
		getch();
	}
	
	if(C2==11){
		
		//cálculos.
		M11++;
		Q11+=Q;
		P=Q*P11;
		N=0;
		PF+=P;
		som();
		printf("produto escolhido: Macaxeira.\n\n");
		printf("Valor à pagar: R$%.2f.\n\n",P);
		printf("Aperte [ENTER] para voltar\n\n");
		getch();
	}
	
	if(C2==12){
		
		//cálculos.
		M12++;
		Q12+=Q;
		P=Q*P12;
		N=0;
		PF+=P;
		som();
		printf("produto escolhido: Berinjela.\n\n");
		printf("Valor à pagar: R$%.2f.\n\n",P);
		printf("Aperte [ENTER] para voltar\n\n");
		getch();
	}
	
	
	}
		
	if(OP==2){
		
	som();
	N=0;
	system("cls");
	printf("+++++++    LISTA DE PRODUTOS   +++++++\n\n");
	printf("\t   *FAST FOOD*\n");	
	printf("Valor do Hamburguer é: %.2f. Cód:1 \n\n", P1);
	printf("Valor da Coxinha é: %.2f. Cód:2 \n\n", P2);
	printf("Valor do Refrigerante é: %.2f. Cód:3 \n\n", P3);
	printf("Valor da Batata frita é: %.2f. Cód:4 \n\n", P4);
	printf("\t    *Açougue*\n");
	printf("Valor da Picanha é: %.2f Cód:5 \n\n", P5);
	printf("Valor do Cupim é: %.2f. Cód:6 \n\n", P6);
	printf("Valor da Mortadela é: %.2f. Cód:7 \n\n", P8);
	printf("Valor do coxão mole é: %.2f. Cód:8 \n\n", P7);
	printf("\t    *Ortifrute*\n");
	printf("Valor da Cenoura é: %.2f Cód:9 \n\n", P9);
	printf("Valor da Jaca é: %.2f. Cód:10 \n\n", P10);
	printf("Valor da Macaxeira é: %.2f. Cód:11 \n\n", P11);
	printf("Valor da Berinjela é: %.2f. Cód:12 \n\n", P12);	
	printf("++++++++++++++++++++++++++++++++++++\n\n");
	printf("Aperte [ENTER] para sair.\n\n");
	getch();
	system("cls");
	
	}	
		
	
	if(OP==3){
		i++;
	}
	
	if(OP==4){
		
	system("cls");
		
	if(M1>0){
		printf("Hamburguer: R$%.2f. Unidades:%d.\n\n",P1,Q1);
	}
	
	if(M2>0){
		printf("Coxinha: R$%.2f. Unidades:%d.\n\n",P2,Q2);
	}
	
	if(M3>0){
		printf("Refrigerante: R$%.2f. Unidades:%d.\n\n",P3,Q3);
	}
	
	if(M4>0){
		printf("Batata frita: R$%.2f. Unidades:%d.\n\n",P4,Q4);
	}
	
	if(M5>0){
		printf("Picanha: R$%.2f. Unidades:%d.\n\n",P5,Q5);
	}
	
	if(M6>0){
		printf("Cupim: R$%.2f. Unidades:%d.\n\n",P6,Q6);
	}
	
	if(M7>0){
		printf("Mortadela: R$%.2f. Unidades:%d.\n\n",P8,Q7);
	}
	
	if(M8>0){
		printf("Coxão mole: R$%.2f. Unidades:%d.\n\n",P7,Q8);
	}
	
	if(M9>0){
		printf("Cenoura: R$%.2f. Unidades:%d.\n\n",P9,Q9);
	}
	
	if(M10>0){
		printf("Jaca: R$%.2f. Unidades:%d.\n\n",P10,Q10);
	}
	
	if(M11>0){
		printf("Macaxeira: R$%.2f. Unidades:%d.\n\n",P11,Q11);
	}
	
	if(M12>0){
		printf("Berinjela: R$%.2f. Unidades:%d.\n\n",P12,Q12);
			 	
	}
		
		if(M1>0 || M2>0 || M3>0 || M4>0 || M5>0 || M6>0 || M7>0 || M8>0 || M9>0 || M10>0 || M11>0 || M12>0){
			
			printf("Deseja voltar ao menu ou pretende retirar algum item?  1 PARA SAIR OU 2 PARA REMOVER.\n\n");
		
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
		 	 R = atoi(dig5);
		 	 
		 	if(R<1 || R>2){
		 		
		 		while(R<1 || R>2){
				system("cls");
		 		printf("Deseja voltar ao menu ou pretende retirar algum item? 1 PARA SAIR OU 2 PARA REMOVER.\n\n");
		 		R=0;
		 		N5=0;
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
		 	 R = atoi(dig5);
		 	}
		 	
	}
		 	if(R==2){
		 		system("cls");
		 		printf("Digite o código do produto que deseja remover:\n\n");
	
	do 
	{
		som();
		C3=getch();
		if (isdigit(C3)!=0)
		
		{
			dig2[N2] = C3;
			N2++;
			printf ("%c", C3);
	
		}
	 
		else if (C3==8&&N2)	
		
		{
			
			dig2[N2]='\0';
			N2--;
			printf("\b \b");
		}
	
	}		 
			while(C3!=13);
		 	
		 	dig2[N2]='\0';
		 	C2 = atoi(dig2);
	
	if(C2>12 || C2<1){
		system("cls");
		printf("DIGITE UM CÓDIGO VÁLIDO!\n\n");
		getch();
	} 
	
	system("cls");	
	
	if(C2==1){

	PF-=P1;	
	M1=0;
	Q1=0;	
	printf("PRODUTO REMOVIDO!\n\n");
	getch();
	
	}

	if(C2==2){
	
	PF-=P2;	
	M2=0;
	Q2=0;	
	printf("PRODUTO REMOVIDO!\n\n");
	getch();	
	
	}

	if(C2==3){

	PF-=P3;	
	M3=0;
	Q3=0;	
	printf("PRODUTO REMOVIDO!\n\n");
	getch();
	
	}
	
	if(C2==4){

	PF-=P4;		
	M4=0;
	Q4=0;	
	printf("PRODUTO REMOVIDO!\n\n");
	getch();
	
	}
	
	if(C2==5){

	PF-=P5;		
	M5=0;
	Q5=0;	
	printf("PRODUTO REMOVIDO!\n\n");
	getch();
		
	}

	if(C2==6){

	PF-=P6;		
	M6=0;
	Q6=0;	
	printf("PRODUTO REMOVIDO!\n\n");
	getch();
	
	}
	
	if(C2==7){

	PF-=P8;		
	M7=0;
	Q7=0;	
	printf("PRODUTO REMOVIDO!\n\n");
	getch();
	
	}
	
	if(C2==8){

	PF-=P7;		
	M8=0;
	Q8=0;	
	printf("PRODUTO REMOVIDO!\n\n");
	getch();
	
	}
	
	if(C2==9){

	PF-=P9;		
	M9=0;
	Q9=0;	
	printf("PRODUTO REMOVIDO!\n\n");
	getch();
	
	}
	
	if(C2==10){

	PF-=P10;		
	M10=0;
	Q10=0;	
	printf("PRODUTO REMOVIDO!\n\n");
	getch();
	
	}
	
	if(C2==11){
	
	PF-=P11;	
	M11=0;
	Q11=0;	
	printf("PRODUTO REMOVIDO!\n\n");
	getch();
	
	}
	
	if(C2==12){
	
	PF-=P12;	
	M12=0;
	Q12=0;	
	printf("PRODUTO REMOVIDO!\n\n");
	getch();
	
	}
	

		
	}
		}
	
	if(M1==0 && M2==0 && M3==0 && M4==0 && M5==0 && M6==0 && M7==0 && M8==0 && M9==0 && M10==0 && M11==0 && M12==0){
		system("cls");
		printf("NENHUMA COMPRA FOI EFETIVADA NO MOMENTO! PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU.\n\n");
		getch();
	}
	
		
	}
	
	
	}
	
	
 }
	
	
	som();
	system("cls");
	printf("EXECUÇÃO ENCERRADA, OBRIGADO POR COMPRAR CONOSCO!\n\n");	
	printf("VALOR TOTAL DAS COMPRAS: %.2f.\n\n", PF);
	
	printf("NOTA:\n\n");
	
	if(M1>0){
		printf("Hamburguer: R$%.2f. Unidades:%d.\n\n",P1,Q1);
	}
	
	if(M2>0){
		printf("Coxinha: R$%.2f. Unidades:%d.\n\n",P2,Q2);
	}
	
	if(M3>0){
		printf("Refrigerante: R$%.2f. Unidades:%d.\n\n",P3,Q3);
	}
	
	if(M4>0){
		printf("Batata frita: R$%.2f. Unidades:%d.\n\n",P4,Q4);
	}
	
	if(M5>0){
		printf("Picanha: R$%.2f. Unidades:%d.\n\n",P5,Q5);
	}
	
	if(M6>0){
		printf("Cupim: R$%.2f. Unidades:%d.\n\n",P6,Q6);
	}
	
	if(M7>0){
		printf("Mortadela: R$%.2f. Unidades:%d.\n\n",P8,Q7);
	}
	
	if(M8>0){
		printf("Coxão mole: R$%.2f. Unidades:%d.\n\n",P7,Q8);
	}
	
	if(M9>0){
		printf("Cenoura: R$%.2f. Unidades:%d.\n\n",P9,Q9);
	}
	
	if(M10>0){
		printf("Jaca: R$%.2f. Unidades:%d.\n\n",P10,Q10);
	}
	
	if(M11>0){
		printf("Macaxeira: R$%.2f. Unidades:%d.\n\n",P11,Q11);
	}
	
	if(M12>0){
		printf("Berinjela: R$%.2f. Unidades:%d.\n\n",P12,Q12);
	}
	
	
	return 0;
}


	int som(){
		
	Beep(880, 100);	
		
		
		
		
		
		
		
	}

