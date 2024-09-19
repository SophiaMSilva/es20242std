#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
main(){
	int n1,s,i;
	setlocale(LC_ALL ,"Portuguese");
	s=rand() %100+1;
	printf("Tente sua sorte, digite um numero de 0 a 100:\n");
	scanf("%d",&n1);
	for (i = 0; i < 10; i++){

		if(n1 == s){
			printf("Parabens vc é big pussy\n");
		}else if(n1<s){
			printf("Tente um numero maior\n");
		}else if(n1>s){
			printf("Tente um numero menor\n");
		}
	}
	
	
return 0;	
}
