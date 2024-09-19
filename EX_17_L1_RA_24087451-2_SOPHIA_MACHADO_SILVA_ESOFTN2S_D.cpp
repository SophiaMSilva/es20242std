#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int valida,codigo;
    printf("Digite o codigo de validação: ");
    scanf("%d",&valida);
    printf("Digite o codigo de rastreamento: ");
    scanf("%d",&codigo);
    
    if((codigo== 9)&&(valida == 333)){
    	printf("Sua encomenda se encontra na PQP");
	}else {
		printf("Codigo incorreto, verifique e tente novamente");
	}
	return 0;
}
