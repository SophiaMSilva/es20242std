#include<stdio.h>
#include<locale.h>
//Inversão de um Vetor

int main(){
	int sim;
	setlocale(LC_ALL,"Portuguese");
	printf("Quantas notas deseja inserir? \n");
	scanf("%d",&sim);
	float numero[sim];
	for(int i=0; i<sim;i++){
		printf("Digite o %dº numero: ",i+1);
		scanf("%f",&numero[i]);
	}
	for(int i=0; i<sim;i++){
		printf("%.2f+\t",numero[i]);
	}
	printf("\n Agora o inverso \n");
	
	for(int i=(sim-1); i>=0;i--){
		printf("%.2f \t",numero[i]);
	}
	
	return 0;
}		
