#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
	float n1, n2, n3, n4, n5, soma, media;
    printf("Digite a nota de (0 a 10): ");
    scanf("%f", &n1);
    
    printf("Digite a nota de (0 a 10): ");
    scanf("%f", &n2);
    
    printf("Digite a nota de (0 a 10): ");
    scanf("%f", &n3);
    
	printf("Digite a nota de (0 a 10): ");
    scanf("%f", &n4);
    
    printf("Digite a nota de (0 a 10): ");
    scanf("%f", &n5);

    soma = n1 + n2 + n3 + n4 + n5;
    media = soma / 5;

    if (media < 5) {
        printf("Situa��o da turma: Reprovada T.T\n");
   
    } else if (media >= 5 && media < 7) {
        printf("Situa��o da turma: Em recupera��o, chora n\n");
   
    } else {
   	    printf("Situa��o da turma: At� ano que vem\n");
    }
    printf("A m�dia da turma �: %.2f\n", media);
    
	return 0;
}

