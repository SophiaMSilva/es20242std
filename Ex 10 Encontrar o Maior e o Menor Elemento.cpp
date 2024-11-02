#include<stdio.h>
#include<locale.h>
//Operações Básicas
int main(){
	int menor,maior,sim;
	setlocale(LC_ALL,"Portuguese");
	menor=10000;
	maior=0;
	printf("Quantas notas deseja inserir? \n");
	scanf("%d",&sim);
	int numero[sim];
	for(int i=0; i<sim;i++){
		printf("Digite o %dº numero: ",i+1);
		scanf("%d",&numero[i]);
		if(numero[i]>maior){
			maior=numero[i];
		}
		if(numero[i]<menor){
			menor=numero[i];
		}
	}
	printf("\n A soma de todos os numeros é: \n");
	for(int i=0; i<sim;i++){
		printf("%d+\t",numero[i]);
	}

	printf("O maior número é :%d \n",maior);
	printf("O menor numero é :%d \n",menor);
	
	
	return 0;
}		
