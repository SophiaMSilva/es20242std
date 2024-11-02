#include<stdio.h>
#include<locale.h>
#include<string.h>
//Copia de vetores
int main(){
	float numero[5];
	float copia[5];
	setlocale(LC_ALL,"Portuguese");
	for(int i=0; i<5;i++){
		printf("Digite o %dº numero: ",i+1);
		scanf("%f",&numero[i]);
		copia[i]=numero[i];
	}

	for(int i=0; i<5;i++){
		printf("%.2f\t",copia[i]);
	}
	return 0;
}
