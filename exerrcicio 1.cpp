#include <stdio.h>
int main(){
    int num;
    printf("Digite um numero para saber se e divisivel por 5:");
    scanf("%d",&num);
    if (num % 5 == 0)
		{
        printf("O numero %d e divisivel por 5.",num);
		}
        else{
        printf("O numero %d nao e divisivel por 5.",num);
    	}
    
    return 0;
}
