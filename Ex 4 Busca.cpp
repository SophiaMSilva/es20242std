#include<stdio.h>
#include<locale.h>
//Busca
int main(){
	int numero[10];
	int contador=0;
	setlocale(LC_ALL,"Portuguese");
	
	for(int i=0; i<10;i++){
		printf("Digite o %d� numero: ",i+1);
		scanf("%d",&numero[i]);
		if(numero[i]==2){
			contador++;
		}
	}
	printf("O primeiro numero � %d \n",numero[0]);
	printf("O n�mero 2 se repete %d \n",contador);
	
	return 0;
}
