#include<stdio.h>
#include<locale.h>
//Ordenação de números
int main(){
	int numero[5];
	int temp=0;
	setlocale(LC_ALL,"Portuguese");
	for(int i=0; i<5;i++){
		printf("Digite o %dº numero: ",i+1);
		scanf("%d",&numero[i]);
	}
	for(int i=0; i<5;i++){
		for(int x=0;x<(5-i-1);x++){
			if(numero[x]>numero[x+1]){
				temp= numero[x];
				numero[x]=numero[x+1];
				numero[x+1]=temp;
			}
		}
	}
	for(int i=0; i<5;i++){
		printf("%d  ",numero[i]);
	}
	return 0;
}
