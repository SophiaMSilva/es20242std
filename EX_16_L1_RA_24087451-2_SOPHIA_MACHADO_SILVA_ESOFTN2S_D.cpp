#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
	int grupo, viagem,desconto,total;
	printf("Digite o pre�o da viagem : ");
	scanf("%d",&viagem);
	printf("Quantas pessoas ir�o : ");
	scanf("%d",&grupo);
	
	if(grupo>5){
		desconto=(viagem*0.2)*grupo;
		total=viagem*grupo-desconto;
		printf("O pacote para %d, possui R$%d de desconto e ficou por R$%d ",grupo,desconto,total);
	}else{
		total=viagem*grupo;
		printf("Complo por que quis n tem desconto, valor %d",total);
	
	}
	
	return 0;
}
