//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//tradução.
	
	
//declarando variável.

	int i[9], X=0;

while(X<1){
	
	i[0]=0;
	i[1]=1;
	i[2]=2;
	i[3]=3;
	i[4]=4;
	i[5]=5;
	i[6]=6;
	i[7]=7;
	i[8]=8;

	system("cls");
		
	srand(time(NULL));
	printf("Número aleatório:%d. \r\n", i[rand()%9]);
	system("pause");
	
}
	
	return 0;
}
