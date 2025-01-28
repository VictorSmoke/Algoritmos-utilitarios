#include <stdlib.h>
#include <windows.h>		
#include <conio.h>
#include <ctype.h>
#include <locale.h>


	int main()
	
{

	setlocale(LC_ALL, "Portuguese");
	
//declaração de variaveis.

	int x=3;
	int *p;

//transferindo valores.

	p=&x;

//exibindo...
	

	printf("end. x: %p \r\n", &x);
	printf("end. p: %p \r\n", &p);

//exbindo valores das variáveis.

	printf("\r\n");
	printf("x: %i \r\n", x);
	printf("p: %p \r\n", &p);
	
//exibindo apenas valor de x, usando P.

	printf("\r\n");
	printf("*p: %i \r\n", *p);
	
	return 0;


}



