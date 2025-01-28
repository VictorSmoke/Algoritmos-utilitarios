//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
	main()




{
	
	
setlocale(LC_ALL, "Portuguese");
	
//declração de variáveis.
	
	float N1;
	char C;
	char dig[50];
	int N=0;
	int N2=0;
	
//coleta de dados.

	printf("digite um número:");
	
//estabelecendo condições exibindo resultados.

{
	do 
	{
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
		 	N2 = atoi(dig);
	
		
	
		 	if (N2 <=10) {
	
	printf(" este é um número pequeno!\n");
	
} 
	else if (N2>=10 && N2 <1000) {
	
	printf(" este é um número médio!\n");
	

}
	else if (N2>=11000) {
	
	printf(" este é um número grande!\n");
}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system ("pause");
	
	return 0;	
}


}
