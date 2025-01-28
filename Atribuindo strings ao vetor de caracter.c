#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//tradução.
	
	char nomes[50][25];
	int i;
	
	for(i==0; i<5; i++){
		
		fflush(stdin);
		printf("Digite nome da posição:%d. \r\n", i);
		scanf("%25[^\n]", nomes[i]);
		system("cls");
		
	}
	
	i=0;
	
	for(i==0; i<4; i++){
		
		printf("Nome:%s. na posição:%d.\r\n", nomes[i], i);
	
	}
	
	return 0;
}
