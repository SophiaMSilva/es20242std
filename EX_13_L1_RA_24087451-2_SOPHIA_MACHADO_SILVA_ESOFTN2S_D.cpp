#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int pontos,premios;
    printf("Quantos pontos voc� possui: ");
    scanf("%d",&pontos);
   
    if((pontos>50) && (pontos<100)){
    	printf("Parab�ns!!!\n");
		printf("Voc� ganhou um tabulereiro\n");

	}else if((pontos>=100)&&(pontos<200)){
		printf("Parab�ns!!!\n");
		printf("Voc� ganhou uma havaina de pau");

	}else if(pontos<50){
		printf("Infelizmente, n�o tem pontos suficiente");
	
	}else{
		printf("Parab�ns!!!\n");
		printf("Voc� ganhou um notebook celeron");
	}
	
	return 0;
	}
    
