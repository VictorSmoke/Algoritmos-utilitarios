#include <stdio.h>

int main() {
	
    char* vetor_de_strings[] = {"Olá", "Mundo", "do", "C!"};
    int tamanho = sizeof(vetor_de_strings) / sizeof(char*)

	int i=0;

	printf("tamanho %d.", tamanho);
	getch();

    for (i = 0; i < tamanho; i++) {
    	
        printf("%s ", vetor_de_strings[i]);
        
    }


    return 0;
}
