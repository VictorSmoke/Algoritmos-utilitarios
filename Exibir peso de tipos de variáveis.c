//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
#include <conio.h>
#include <ctype.h>


	void main()//programa principal
	
{

	setlocale(LC_ALL, "Portuguese");//tradução.

	
//declaração de variaveis.
	
	printf("Exibindo valor de em bytes de int:%d.\r\n", sizeof (int));	
	printf("Exibindo valor de em bytes de float:%d.\r\n", sizeof (float));
	printf("Exibindo valor de em bytes de short:%d.\r\n", sizeof (short));
	printf("Exibindo valor de em bytes de long:%d.\r\n", sizeof (long));
	printf("Exibindo valor de em bytes de double:%d.\r\n", sizeof (double));
	
	
}




