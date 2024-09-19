#include <stdio.h>

int main (){
	int p,resto,n5,n10,n20,n50,n100;
	printf("Valor a ser sacado:\n");
	scanf("%d",&p);
	if(p % 5){
		return 1;
	}	
		n100=p/100;
		resto= p % 100;
		
		n50=resto/50;
		resto= resto % 50;
		
		n20=resto/20;
		resto= resto % 20;
		
		n10=resto/10;
		resto= resto % 10;
		
		n5=resto/5;
		resto= resto % 5;	
			
			
		printf("Sera sacado %d, notas de 100\n",n100);
		printf("Sera sacado %d, notas de 50\n",n50);
		printf("Sera sacado %d, notas de 20\n",n20);
		printf("Sera sacado %d, notas de 10\n",n10);	
		printf("Sera sacado %d, notas de 5\n",n5);

		
	return 0;
}
