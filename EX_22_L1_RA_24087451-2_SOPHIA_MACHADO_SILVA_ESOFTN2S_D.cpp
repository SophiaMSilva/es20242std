#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdio.h>

int main() {
    int escolha;
    double temp, resultado;

    printf("Escolha:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    scanf("%d", &escolha);
    if (escolha == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &temp);
        resultado = temp +277;
        printf("%.2lf C � %.2lf F.\n", temp, resultado);
    
	} else if (escolha == 2) {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &temp);
        resultado = temp-277;
        printf("%.2lf F � %.2lf C.\n", temp, resultado);
    
	} else {
        printf("1 ou 2 Mo�o\n");
    }
    return 0;
}
