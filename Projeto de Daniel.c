#include <stdlib.h>
#include <stdio.h>
#include <locale.h> /* setlocale */
#include <conio.h>
#include <ctype.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese"); //habilitar acentos no console
    int codProduto;     //código do produto
    int qtdProdtudos;   //quantidade de produtos
    float precoProduto; //preco unitário do produto
    float totalPorItem; //total por item (preço * quantidade)
    float totalGeral;   //total da compra
    char opcao;
    float N1;
	char C,C2;
	char dig[50],dig2[50];
	int N=0,N2;
	
    do {
        system("cls");
        printf("           ________________________________\n\n");
        printf("            Especificação     código  preço\n");
        printf("           ________________________________\n\n");
        printf("           Cachorro quente -- |100|  R$1,20\n");
        printf("           Bauru Simples ---- |101|  R$1,30\n");
        printf("           Bauru c/ovo ------ |102|  R$1,50\n");
        printf("           Hamburguer ------- |103|  R$1,20\n");
        printf("           Cheeseburguer ---- |104|  R$1,30\n");
        printf("           Refrigerente ----- |105|  R$1,00\n");
        printf("           ________________________________\n\n");    
        printf("Código do lanche:\n\n");
        
        do 
	{
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
		 	codProduto = atoi(dig2);
	
	
        printf("\n\nQuantidade:");
        
        
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
		 	qtdProdtudos = atoi(dig);
	
        switch (codProduto) {
            case 100:
                precoProduto = 1.20;
            break;
            case 101:
                precoProduto = 1.30;
            break;
            case 102:
                precoProduto = 1.50;
            break;
            case 103:
                precoProduto = 1.20;
            break;
            case 104:
                precoProduto = 1.30;
            break;
            case 105:
                precoProduto = 1.00;
            break;
        }
        totalPorItem = precoProduto*qtdProdtudos; //calcula o total do item
        printf("\n\nTotal do item: R$%.2f ",totalPorItem); //exibe o total do item
        totalGeral  +=  totalPorItem; //acumula o total
        printf("\nDeseja algo mais? ([S] ou [N])\n");
        scanf(" %c", &opcao);
        N=0;
        if(opcao!='N' && opcao!='S'){
        while(opcao!='S' && opcao!='N'){
        	
			system("cls");
        	printf("OPÇÃO INVALIDA, DIGITE APENAS UMA DAS OPÇÕES VÁLIDAS!\n\n");
        	printf("\nDeseja algo mais? ([S] ou [N])\n");
        	scanf(" %c", &opcao);
    	}
			
		}
        
        } while (opcao=='S');
        
    printf("TOTAL: R$%.2f ",totalGeral); //exibe o total geral
    
}
