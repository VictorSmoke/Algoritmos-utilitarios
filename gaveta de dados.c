//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
#include <conio.h>
#include <ctype.h>
#include <string.h>

	int som(){
		
		Beep(880, 100);	
	
}

	
	void gaveta(char Alunos[]){
		
//declarando variáveis.
		
		int i=0, I2=0, N=0, Cont1==0, Cont2=0, Cont3=0;
		float  Gaveta[50];
		char C;
		char dig[50];	
		
		for(I2==0; I2<=9; I2++){
	
			system("cls");
			fflush(stdin);
			printf("Digite %d° nota:", I2);
		
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
							
				}	else if (C==44){
			
					dig[N] = C;
					N++;
					printf("%c", C);
					Cont3++;
				}
	
		}		 
			while(C!=13);
		 	
		 	dig[N]='\0';
		 	Gaveta[Cont2] = atof(dig);
	
			Cont2++;
	
	}
	
			Cont2=0;
	
			system("cls");
		
		for(Cont1==0; Cont1 <= 9; Cont1++){
			
			printf("\r\n");
			printf("Aluno: %s. Notas: %.2f.\r\n", Alunos[Cont1], Gaveta[Cont1]);
		
					
	}
		
} 


		void main()//programa principal
	
{

	setlocale(LC_ALL, "Portuguese");//tradução.

	
//declaração de variaveis.

	char Alunos[10][21];
	char C, dig[20];
	int i=0, Cont=0, Cont2=1, Cont3=0, Cont4=0, Cont5=0, tan;
	
//coleta de dados.
	
	for(Cont==0; Cont <= 9; Cont++, Cont2++, Cont4++){
	
		fflush(stdin);
		printf("Digite %d° nome:", Cont2);
	
		i=0;
		Cont5=0;
		
			do{
			
				som();
				C=getch();
		
				if(Cont5==20){
				
						dig[i]='\0';
						i--;
						printf("\b \b");
						Cont5--;
							
					}
		
				if (isalpha(C)!=0 || C==32 && Cont5<21){
				
						dig[i] = C;
						i++;
						printf ("%c", C);
						Cont5++;
	
					}	else if (C==8 && 0<Cont5){
			
							dig[i]='\0';
							i--;
							printf("\b \b");
							Cont5--;
							
					}
		
			}	while(C!=13);
				dig[i]='\0';
				strcpy(Alunos[Cont4], dig);
				
	
		 
	system("cls");

	}
	
	
	for(Cont3==0; Cont3 <= 9; Cont3++){
			
			printf("\r\n");
			printf("Aluno: %d. Nome: %s.\r\n", Cont3, Alunos[Cont3]);
		
			
	}
	
	getch();

		
//atribuindo valores.
		
	gaveta(*Alunos);//chamando procedimento para listagem de notas.
			
}
