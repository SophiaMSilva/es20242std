#include <stdio.h>

int main (){
	float n1;
	printf("Digite o valor da sua compra:\n");
	scanf("%f",&n1);
	
	if(n1<100){
		printf("Nada acontece feijoada, valor: %f",n1);	
		
	}else if(n1>99 && n1<=500){
			
		printf("Voce possui 10%% de desconto, valor : %f",n1=n1-(n1*0.1));
	
	}else{
		
		printf("Voce possui 20%% de desconto, valor : %f",n1=n1-(n1*0.2));
	}
	
	
	
	
	return 0;
}
