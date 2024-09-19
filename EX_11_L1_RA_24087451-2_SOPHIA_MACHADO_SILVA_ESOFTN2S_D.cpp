#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int l1,l2,l3;
	printf("Digite um lado do triangulo: ");
	scanf("%d",&l1);
	printf("Digite um lado do triangulo: ");
	scanf("%d",&l2);
	printf("Digite um lado do triangulo: ");
	scanf("%d",&l3);
	
	if((l1 == l2)&&(l1==l3)){
		printf("É um triangulo equilatero");
	
	}else if((l1 == l2)||(l1==l3)){
		printf("É um triangulo isosceles");
	
	}else{
		printf("É um triango escaleno");
	}
	
	return 0;
}
