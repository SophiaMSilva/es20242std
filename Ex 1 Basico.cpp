#include<stdio.h>
#include<locale.h>
//BÁSICOS
int main(){
	int numero[10];
	setlocale(LC_ALL,"Portuguese");
	for(int i=0; i<10;i++){
		printf("Digite o %dº numero: ",i+1);
		scanf("%d",&numero[i]);
	}
	printf("\n Em ordem digitação \n");
	for(int i=0; i<10;i++){
		printf("%d \t",numero[i]);
	}
	printf("\n Agora o inverso \n");
	for(int i=9; i>=0;i--){
		printf("%d \t",numero[i]);
	}
	
	
	
	return 0;
}
