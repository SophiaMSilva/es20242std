#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

main(){
	float gasolina,km,consumo,custo;
	printf("Digite o valor da gasolina: ");
	scanf("%f",&gasolina);
	
	printf("Qual a distancia ate seu destino: ");
	scanf("%f",&km);
	
	printf("Quanto consome de gasolina seu carro: ");
	scanf("%f",&consumo);
	
	custo=(km/consumo)*gasolina;
	printf("Custo total da viagem R$ %.2f",custo);
	
	return 0;
}
