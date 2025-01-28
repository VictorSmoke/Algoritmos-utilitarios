//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		

		
	int main(void){
	


	setlocale(LC_ALL, "Portuguese");

//declaração de variáveis.

	int H=0, H2=0, M2=0, S2=0, S=0, M=0, i2=0, i=0, CR, P=0, T1, T2, T3, D=0, H3=0, M3=0, S3=0, A1=0, A2=0, A3=0, AA1=0, AA2=0, AA3=0, BB1=0, BB2=0, BB3=0, CC1=0, CC2=0, CC3=0, DD1=0, DD2=0, DD3=0, FF1=0, FF2=0, FF3=0;
	
//menu de funções e comandos de loop, para que o usuário digite valores compativeis.






	






	do{
	system("cls");
	printf("Bem-vindo ao relógio digital. Para acessar as funções abaixo, pressione o número correspondente.\n");
	
	printf("Relógio 1.\n\n");
	printf("Cronometro 2.\n\n");
	printf("Alarmes 3.\n\n");
	printf("Sair do programa 9\n\n");
	printf(":");
	scanf("%d", &CR);
	system("cls");
	
	if(CR<1 || CR>9){
		
	do{
	CR=0;
	printf("Número inválido!\n");
	printf("Digite um número válido correspondente a função desejada.\n");
	printf("Relógio 1.\n\n");
	printf("Cronometro 2.\n\n");
	printf("Alarmes 3.\n\n");
	printf("Sair do programa 9\n\n");
	printf(":");
	scanf("%d", &CR);
	system("cls");
	
	}while(CR<1 || CR>9);
		
	
	}
	
	
	
	
	
	
	
//relógio.

if(CR==1){
	
	
	
	printf("ajuste a hora!\n");
	printf("OBS: qualquer segundo acima de 59, minutos acima de 59 ou horas acima de 23, serão negados.\n");
	printf("digite as horas em que o relógio irá contar:");
	scanf("%d",&H);
	printf("digite os minutos em que o relógio irá contar:");
	scanf("%d",&M);
	printf("digite os segundos em que o relógio irá contar:");
	scanf("%d",&S);

//definindo alarme e estabelecendo condições para bom funcionamento.
	
	system("cls");
	printf("defina um alarme.\n");
	printf("Horas:\n");
	scanf("%d", &A1);
	printf("minutos:\n");
	scanf("%d", &A2);
	printf("segundos:\n");
	scanf("%d", &A3);
	system("cls");
	system("pause");








//alarme

//estabelecendo condições para manutenção de segundos, minutos e horas.
	
	
	if(A1>23){
	do{
	system("cls"); //usado para limpar texto anteriores que fora exibidos.
	printf("você digitou números acima do padrão suportado.\n");
	printf("digite as horas do alarme:");
	scanf("%d",&A1);

//estabelecendo loops com while para garantir valoras compativeis, tendo como intuito o bom funcionamento do relógio.
		
} while(A1>23);

}
	if(A2>59){
	do{
	system("cls");
	printf("você digitou números acima do padrão suportado.\n");	
	printf("digite os minutos do alarme:");
	scanf("%d",&A2);
	
} while(A2>59);

}
	if(A3>59){
	do{
	system("cls");
	printf("você digitou números acima do padrão suportado.\n");	
	printf("digite os segundos do alarme:");
	scanf("%d",&A3);
	system("cls");
} while (A3>59);
	
}
	




//estrutura condicional para manter todas as variáveis compativeis.

	if(A3<0){
	A3=0; 
	}
	if(A2<0){
	A2=0; 
	}
	if(A1<0){
	A1=0; 
	}
	if(H<0){
	H=0;
	}
	if(H2<0){
	H2=0;
	}
	if(M2<0){
	M2=0;
	}
	if(M<0){
	M=0;
	}
	if(S<0){
	S=0;
	}
	if(S2<0){
	S2=0;
	}
	if(H3<0){
	H3=0;
	}
	if(M3<0){
	M3=0;
	}
	if(S3<0){
	S3=0;
	}
	if(T1<0){
	T1=0;
	}
	if(T2<0){
	T2=0;
	}
	if(T3<0){
	T3=0;
	}







	
//feita a coleta de dados podemos dar inicio ao programa.
	
	
	
//usando if podemos determinar que ao preencher os dados corretamente a maquina usará while para manter o relógio funcionando.
	if(H<=23 && M<=59 && S<=59){
	i=0;
	while(i<1){
		
		
		
//os ifs faram a conversão dos segundos em minutos e por sua vez em horas.
		
		if(S>=0 && S<60){
			sleep(1);
			++S;
				
		}
		if (S==60){
			S=0;
			++M;
		}
		if(M==60){
			M=0;
			++H;
		}
		if(H==24){
			H=0;
			++D;
		}
		
		system("cls");
		
	printf("Relógio.\n\n");
	printf("horário ajustado\n\n");
	printf("   %d   :    %d    :    %d  \n\n",A1,A2,A3);//exibindo horário no qual o relógio deve parar.
	printf("	Dias | Horas | Minutos | Segundos\n");
	printf("    _________________________________________\n");	
	printf("         %d   :   %d   :   %d     :    %d  \n",D,H,M,S);
	printf("    _________________________________________\n");
	

	
	if(H==A1 && S==A3 && M==A2){//if usado para romper o loop while(i<1).
		++i;
		CR=0;
//ao digitar 1 você voltará para o menu principal, podendo executar tudo novamente.	
	printf("execução finalizada...\n");
	printf("digite 1 para voltar ao menu, ou qualquer tecla para sair:");
	som();//comando usado para soar o alarme.
	scanf("%d", &CR);
	system("cls");
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//caso o usuário não digite os dados corretamente, ele será encaminhado para um else com loops para força-lo a digitar os dados compativeis.

} else if(M>59 && S>59 && H>23){
	CR=0;
	
	printf("digite apenas números dentro do padrão estabelecido!\n");
	printf("OBS: qualquer segundo acima de 59, minutos acima de 59 ou horas acima de 23 serão negados.\n");
	printf("digite as horas em que o relógio irá contar:");
	scanf("%d",&H);
}
	if(H>23){
	do{
	system("cls");
	printf("você digitou horas acima do padrão suportado.\n");
	printf("digite as horas em que o relógio irá contar:");
	scanf("%d",&H);
		
} while(H>23);

}
	if(M>59){
	do{
	system("cls");
	printf("você digitou minutos acima do padrão suportado.\n");	
	printf("digite os minutos em que o relógio irá contar:");
	scanf("%d",&M);
	
} while(M>59);

}
	if(S>59){
	do{
	system("cls");
	printf("você digitou segundos acima do padrão suportado.\n");	
	printf("digite os segundos em que o relógio irá contar:");
	scanf("%d",&S);
	system("cls");
	
} while (S>59);



//estrutura condicional para manter todas as variáveis compativeis.

	if(A3<0){
	A3=0; 
	}
	if(A2<0){
	A2=0; 
	}
	if(A1<0){
	A1=0; 
	}
	if(H<0){
	H=0;
	}
	if(H2<0){
	H2=0;
	}
	if(M2<0){
	M2=0;
	}
	if(M<0){
	M=0;
	}
	if(S<0){
	S=0;
	}
	if(S2<0){
	S2=0;
	}
	if(H3<0){
	H3=0;
	}
	if(M3<0){
	M3=0;
	}
	if(S3<0){
	S3=0;
	}
	if(T1<0){
	T1=0;
	}
	if(T2<0){
	T2=0;
	}
	if(T3<0){
	T3=0;
	}


























//caso o usuário digite números compativeis, o programa será executado como visto anteriormente.

	if(S<=59 && H<=23 && M<=59){
		
	}
	
	while(i<1){
		
		
		
	
		
		if(S>=0 && S<60){
			sleep(1);
			++S;
				
		}
		if (S==60){
			S=0;
			++M;
		}
		if(M==60){
			M=0;
			++H;
		}
		if(H==24){
			H=0;
			++D;
		}
		
		system("cls");
		
	printf("Relógio.\n\n");
	printf("horário ajustado\n\n");
	printf("   %d   :    %d    :    %d  \n\n",A1,A2,A3);
	printf("	Dias | Horas | Minutos | Segundos\n");
	printf("    _________________________________________\n");	
	printf("         %d   :   %d   :   %d     :    %d  \n",D,H,M,S);
	printf("    _________________________________________\n");

	if(H==A1 && S==A3 && M==A2){
		++i;
		CR=0;
		
	printf("execução finalizada...\n");
	printf("digite 1 para voltar ao menu, ou qualquer tecla para sair:");
	som();
	scanf("%d", &CR);
	system("cls");
	}
}

}

}	







//caso o usuário digite 2 no menu, será executado o cronometro.

	else if(CR==2){
	
//será feito novamente uma coleta de dados controladas por if's, while's e do's.

	printf("informe o tempo que o cronometro contará!\nHora:");
	scanf("%d", &T1);
	printf("minutos:");
	scanf("%d", &T2);
	printf("segundos:");
	scanf("%d", &T3);
	system("cls");
	system("pause");
	
	if(T1>24){
	do{
	system("cls");	
	printf("você digitou números acima do padrão suportado.\n");
	printf("informe o tempo que o cronometro contará!\nHora:");
	scanf("%d", &T1);
	system("pause");
	}while(T1>24);
		
	}
	
	if(T2>60){
	do{
	system("cls");
	printf("você digitou números acima do padrão suportado.\n");
	printf("minutos:");
	scanf("%d", &T2);
	system("pause");
	}while(T2>60);
	
	}
	
	if(T3>60){
	do{
	system("cls");
	printf("você digitou números acima do padrão suportado.\n");
	printf("segundos:");
	scanf("%d", &T3);
	system("pause");
	}while(T3>60);
	
	}
	
	
	
	
	
	
	
	
	if(M2<=59 && S2<=59 && H2<=23){
		H3=T1;
		M3=T2;
		S3=T3;
	}
	do {
		
	system("cls");//após cada coleta, é necessário usar o system cls para limpar os textos exibidos anteriormente.
//feito isso podemos iniciar o cronometro.
	printf("Cronometro.\n\n");
	printf("horário ajustado\n\n");
	printf("   %d   :    %d    :    %d  \n\n",H3,M3,S3);//aqui está sendo exibido o horário que o cronometro vai parar.
	

	
	printf("\n\t\t\t\t Horas | Minutos | Segundos\n\n");
	printf("\n\t\t\t\t___________________________\n\n");	
	printf("\n\t\t\t\t   %d   :    %d    :    %d  \n",H2,M2,S2);
	printf("\n\t\t\t\t___________________________\n\n");
	
	
		
		
		
		if (S2==60){
			S2=0;
			M2++;
		}
		if(M2==60){
			M2=0;
			H2++;
		}
		if(H2==24){
			H2=0;
		}
		
		sleep(1);
		S2++;
		
		if(H2==T1 && M2==T2 && S2==T3){
		i++;
		}
		system("cls");
	printf("Cronometro.\n\n");
	printf("\n\t\t\t\t Horas | Minutos | Segundos\n\n");
	printf("\n\t\t\t\t___________________________\n\n");	
	printf("\n\t\t\t\t   %d   :    %d    :    %d  \n",T1,T2,T3);
	printf("\n\t\t\t\t___________________________\n\n");
		
		
		
	
} while (i==0);
	CR=0;
	printf("execução finalizada...\n");
	printf("digite 1 para voltar ao menu, ou qualquer tecla para sair:");
	som();//como pode ver, o cronometro também possuí alarme.
	scanf("%d", &CR);
	system("cls");



} else if(CR==3){
	CR=0;
	do{
		
		printf("Aqui você pode salvar seus alarmes. É possível salvar até 3 alarmes diferentes, mas todos eles serão apagados ao final  da execução.\n\n");
		printf("Digite 1 para voltar ao menu principal do programa.\n\n");
		printf("Digite 2 para acessar os alrmes.\n\n");
		printf("Sair do programa (Qualquer tecla).\n");
		printf(":");
		scanf("%d", &CR);
		system("cls");
		
	if(CR==2){
		CR=0;
		printf("Configure um alarme!\n");
		printf("Hora:");
		scanf("%d",&A1);
		printf("Minutos:");
		scanf("%d",&A2);
		printf("Segundos:");
		scanf("%d",&A3);
		system("cls");
		
		if(A1>23){
	do{
	system("cls"); //usado para limpar texto anteriores que fora exibidos.
	printf("você digitou números acima do padrão suportado.\n");
	printf("digite as horas do alarme:");
	scanf("%d",&A1);

//estabelecendo loops com while para garantir valoras compativeis, tendo como intuito o bom funcionamento do relógio.
		
} while(A1>23);

}
	if(A2>59){
	do{
	system("cls");
	printf("você digitou números acima do padrão suportado.\n");	
	printf("digite os minutos do alarme:");
	scanf("%d",&A2);
	
} while(A2>59);

}
	if(A3>59){
	do{
	system("cls");
	printf("você digitou números acima do padrão suportado.\n");	
	printf("digite os segundos do alarme:");
	scanf("%d",&A3);
	system("cls");
} while (A3>59);
	
}

		printf("Alarme definido!\n");
		printf("Deseja sair ou definir um segundo alarme?\n");
		printf("Voltar ao menu 1.\n\n");
		printf("Definir outro 2.\n\n");
		printf(":");
		scanf("%d",&CR);

	if(CR==2){
		
		CR=0;
		printf("Configure um alarme!\n");
		printf("Hora:");
		scanf("%d",&AA1);
		printf("Minutos:");
		scanf("%d",&AA2);
		printf("Segundos:");
		scanf("%d",&AA3);
		system("cls");
		
		if(AA1>23){
	do{
	system("cls"); //usado para limpar texto anteriores que fora exibidos.
	printf("você digitou números acima do padrão suportado.\n");
	printf("digite as horas do alarme:");
	scanf("%d",&AA1);

//estabelecendo loops com while para garantir valoras compativeis, tendo como intuito o bom funcionamento do relógio.
		
} while(AA1>23);

}
	if(AA2>59){
	do{
	system("cls");
	printf("você digitou números acima do padrão suportado.\n");	
	printf("digite os minutos do alarme:");
	scanf("%d",&AA2);
	
} while(AA2>59);

}
	if(AA3>59){
	do{
	system("cls");
	printf("você digitou números acima do padrão suportado.\n");	
	printf("digite os segundos do alarme:");
	scanf("%d",&A3);
	system("cls");
	
} while (AA3>59);
	
}
		
		printf("Alarme definido!\n");
		printf("Deseja sair ou definir um segundo alarme?\n");
		printf("Voltar ao menu 1.\n\n");
		printf("Definir outro 2.\n\n");
		printf(":");
		scanf("%d",&CR);
		
		if(CR==2){
		
		CR=0;
		printf("Configure um alarme!\n");
		printf("Hora:");
		scanf("%d",&AA1);
		printf("Minutos:");
		scanf("%d",&AA2);
		printf("Segundos:");
		scanf("%d",&AA3);
		system("cls");
		
		if(AA1>23){
	do{
	system("cls"); //usado para limpar texto anteriores que fora exibidos.
	printf("você digitou números acima do padrão suportado.\n");
	printf("digite as horas do alarme:");
	scanf("%d",&AA1);

//estabelecendo loops com while para garantir valoras compativeis, tendo como intuito o bom funcionamento do relógio.
		
} while(AA1>23);

}
	if(AA2>59){
	do{
	system("cls");
	printf("você digitou números acima do padrão suportado.\n");	
	printf("digite os minutos do alarme:");
	scanf("%d",&AA2);
	
} while(AA2>59);

}
	if(AA3>59){
	do{
	system("cls");
	printf("você digitou números acima do padrão suportado.\n");	
	printf("digite os segundos do alarme:");
	scanf("%d",&AA3);
	system("cls");
	
} while (AA3>59);
	
}
		
		
		
		
	}








	if(A3<0){
	A3=0; 
	}
	if(A2<0){
	A2=0; 
	}
	if(A1<0){
	A1=0; 
	}
	if(H<0){
	H=0;
	}
	if(H2<0){
	H2=0;
	}
	if(M2<0){
	M2=0;
	}
	if(M<0){
	M=0;
	}
	if(S<0){
	S=0;
	}
	if(S2<0){
	S2=0;
	}
	if(H3<0){
	H3=0;
	}
	if(M3<0){
	M3=0;
	}
	if(S3<0){
	S3=0;
	}
	if(T1<0){
	T1=0;
	}
	if(T2<0){
	T2=0;
	}
	if(T3<0){
	T3=0;
	}



		
		
}
		
		
		
}

		
		
	}while(CR==0);
	
	
	
	

	













}








}	while(CR==1);//o algoritmo inteiro está dentro de um loop, em que é possível sair pressionando qualquer tecla. exeto 1.


	printf("FIM DA EXECUÇÃO.");
	
}












int som() {
	Beep(2000, 1000);
	sleep(1);
	Beep(2000, 1000);
	sleep(1);
	Beep(2000, 1000);
	sleep(1);
	Beep(2000, 1000);
	sleep(1);
	Beep(2000, 1000);
	sleep(1);
	Beep(2000, 1000);
	sleep(1);
	Beep(2000, 1000);
	sleep(1);
	Beep(2000, 1000);
	sleep(1);
	Beep(2000, 1000);
	sleep(1);	
	Beep(2000, 1000);
	
	
}
