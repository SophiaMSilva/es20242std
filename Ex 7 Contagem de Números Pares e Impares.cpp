#include<stdio.h>
#include<locale.h>
//Contagem de n�meros pares e impares 
int main(){
	int numero[10];
	int par=0;
	int impar=0;
	setlocale(LC_ALL,"Portuguese");
	
	for(int i=0; i<10;i++){
		printf("Digite o %d� numero: ",i+1);
		scanf("%d",&numero[i]);
		if(numero[i]%2== 0){
			par++;
		}else{
			impar++;
		}
	}
	printf("Nesse vetor possui %d n�meros pares \n",par);
	printf("Nesse vetor possui %d n�meros �mpares \n",impar);
	
	
	return 0;
}
