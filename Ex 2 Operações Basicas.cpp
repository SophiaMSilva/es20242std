#include<stdio.h>
#include<locale.h>
//Opera��es B�sicas
int main(){
	int numero[10];
	int soma,menor,maior;
	setlocale(LC_ALL,"Portuguese");
	soma=0;
	menor=0;
	maior=0;
	for(int i=0; i<10;i++){
		printf("Digite o %d� numero: ",i+1);
		scanf("%d",&numero[i]);
		soma+=numero[i];
		if(numero[i]>maior){
			maior=numero[i];
		}
		if(numero[i]<menor){
			menor=numero[i];
		}
	}
	printf("\n A soma de todos os numeros �: \n");
	for(int i=0; i<10;i++){
		printf("%d+\t",numero[i]);
	}
	printf(":%d \n",soma);
	printf("O maior n�mero � :%d \n",maior);
	printf("O menor numero � :%d \n",menor);
	
	
	return 0;
}
