#include<stdio.h>
#include<locale.h>
//Operações com 2 vetores
int main(){
	int numero[3];
	int soma,menor,igual;
	setlocale(LC_ALL,"Portuguese");
	soma=0;
	igual=0;
	for(int i=0; i<2;i++){
		printf("Digite o %dº numero: ",i+1);
		scanf("%d",&numero[i]);
	}
	numero[2]=numero[1]+numero[0];
	numero[3]=numero[1]-numero[0];
	if(numero[1]==numero[0]){
		printf("Os vetores são inguais >.< \n");
	}else{
		printf("Os vetores são deferentes T.T \n");
	}
	printf("A soma dos vetores= %d \n",numero[2]);
	printf("A subtração dos vetores= %d \n",numero[3]);

	
	return 0;
}
