#include <stdio.h>
#include <math.h>
#include <locale.h>
main(){
	setlocale(LC_ALL ,"Portuguese");
	int n1,n2,q;
	printf("Descubra se o numero forma um quadrado pft:\n");
	scanf("%d",&n1);
		q = sqrt(n1);
		n2= q*q;
	if (n2==n1){
		printf("Seu numero é um quadrado perfeito %d",n1);
	} else{
		printf("Que pena perdeu tudo %d, n e quadradinho de 4",n1);
		}
	
	return 0;
}

