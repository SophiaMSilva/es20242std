#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
    float temperatura, humidade, sensat;
    printf("Qual a temperatura em Celcius?");
    scanf("%f", &temperatura);
    printf("Qual a umidade relativa em porcentagem?");
    scanf("%f", &humidade);
    
    sensat = temperatura - ((0.55 - (0.0055 * humidade) * (temperatura - 14.5) ) / 1.8);
    
    printf("Sensacao terminca e: %.2f", sensat);

    return 0;
}
