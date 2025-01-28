//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
#include <conio.h>
#include <ctype.h>
#include <string.h>

int V3=0;

int som(){
		
		Beep(880, 100);	
	
}

int Meta(int N, int *N2){
	
	*N2=N*2;
	N=N*2;
	V3=V3*2;
	
	return N;
	
}

void main(){
		
	setlocale(LC_ALL, "Portuguese");//tradução.

	
//declaração de variaveis.

	int V=0, V2=0;
	int i=0, N=0, Cont2=0, Cont3=0;
	char C;
	char dig[50];	
			
//coleta de dados.

			system("cls");
			fflush(stdin);
			printf("Digite um numero:");
		
		N=0;
		Cont3=0;
		
			do {
				
					som();
				C=getch();
			
					if (isdigit(C)!=0){
				
					dig[N] = C;
					N++;
					printf ("%c", C);
					Cont3++;
	
				}	else if (C==8 && 0<Cont3){
			
					dig[N]='\0';
					N--;
					printf("\b \b");
					Cont3--;
								
				}	if(Cont3>3){
				
					dig[N]='\0';
					N--;
					printf("\b \b");
					Cont3--;
							
				}
	
		}		 
			while(C!=13);
		 	
		 	dig[N]='\0';
		 	V = atoi(dig);
			V3= atoi(dig);
			
	system("cls");
	printf("Número antes:%d.\r\n", V);//exibição.	
			
//chamando função.

	V=Meta(V, &V2);
	
	printf("Número depois com return:%d.\r\n", V);
	printf("Número depois com referência:%d.\r\n", V2);
	printf("Número depois com variável global:%d.\r\n", V3);
	getch();
	
}
