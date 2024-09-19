#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int ano;
	printf("Digite um ano para saber se é bissexto: ");
	scanf("%d",&ano);
	if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("O ano de %d é bissexto",ano);
    } else {
        printf("O ano de %d não é bissexto",ano);
	}
	return 0;
}
