#include<stdio.h>
#include<locale.h>
//M�dias de notas
int main(){
	int numero[10];
	float soma,media,sim;
	setlocale(LC_ALL,"Portuguese");
	soma=0;
	media=0;
	printf("Quantas notas deseja inserir? \n");
	scanf("%f",&sim);
	
	for(int i=0; i<sim;i++){
		printf("Digite o %d� numero: ",i+1);
		scanf("%f",&numero[i]);
		soma+=numero[i];
	}
	media=soma/sim;
	printf("A m�dia � %.2f",media);
	
	
	return 0;
}
