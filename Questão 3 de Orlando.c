#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



float retorna_elemento(float vetor [], int T){
int c=0, o=0, nmqon=0;
float F;

for(c=0; c <= T; c++){
	
	for(o=0; o < T; o++){
		
		if(vetor[c] >= vetor[o]){
			
			nmqon++;
			
		}
		
		if(nmqon == T){
			
		F=vetor[c]; 	
		c=T;
		
		} 
		 
		
	}
	 nmqon=0; o=0;
	 
}
 c = 0;

return F;
	
}


void main(){
	float retornar[4], F;
	int T;
	
	setlocale(LC_ALL, "Portuguese");
	
	T=5;
	
 printf("Digite o primeiro número: \r\n");
 scanf("%f", &retornar[0]);
 printf("Digite o segundo número: \r\n");
 scanf("%f", &retornar[1]);
 printf("Digite o terceiro número: \r\n");
 scanf("%f", &retornar[2]);
 printf("Digite o quarto número: \r\n");
 scanf("%f", &retornar[3]);
 printf("Digite o quinto número: \r\n");
 scanf("%f", &retornar[4]);
 
  	
    F=retorna_elemento(retornar, T);
    
    printf("O maior elemento do vetor:%.2f \r\n", F);
}

