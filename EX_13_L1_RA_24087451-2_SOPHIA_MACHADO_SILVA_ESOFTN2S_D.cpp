#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int pontos,premios;
    printf("Quantos pontos você possui: ");
    scanf("%d",&pontos);
   
    if((pontos>50) && (pontos<100)){
    	printf("Parabéns!!!\n");
		printf("Vocé ganhou um tabulereiro\n");

	}else if((pontos>=100)&&(pontos<200)){
		printf("Parabéns!!!\n");
		printf("Vocé ganhou uma havaina de pau");

	}else if(pontos<50){
		printf("Infelizmente, não tem pontos suficiente");
	
	}else{
		printf("Parabéns!!!\n");
		printf("Você ganhou um notebook celeron");
	}
	
	return 0;
	}
    
