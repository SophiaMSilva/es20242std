#include<stdio.h>
#include<locale.h>
//B�SICOS
int main(){
	int numero[10];
	setlocale(LC_ALL,"Portuguese");
	for(int i=0; i<10;i++){
		printf("Digite o %d� numero: ",i+1);
		scanf("%d",&numero[i]);
	}
	printf("\n Em ordem digita��o \n");
	for(int i=0; i<10;i++){
		printf("%d \t",numero[i]);
	}
	printf("\n Agora o inverso \n");
	for(int i=9; i>=0;i--){
		printf("%d \t",numero[i]);
	}
	
	
	
	return 0;
}
