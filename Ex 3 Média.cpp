#include<stdio.h>
#include<locale.h>
//M�dias
int main(){
	int numero[10];
	int soma,media;
	setlocale(LC_ALL,"Portuguese");
	soma=0;
	media=0;
	for(int i=0; i<10;i++){
		printf("Digite o %d� numero: ",i+1);
		scanf("%d",&numero[i]);
		soma+=numero[i];
	}
	media=soma/10;
	printf("A m�dia � %d",media);
	
	
	return 0;
}
