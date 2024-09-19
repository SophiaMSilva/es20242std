#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int n1,taxa,km,valor;
    taxa=150;
    km=2;
    printf("Digite a distancia percorrida:\n");
    scanf("%d",&n1);
    valor=taxa+(km*n1);
    
    printf("Valor a ser pago R$ %d\n",valor);
    printf("Forma de pagamento\n");
    printf("1-Pix\n");
    printf("2-Crédito\n");
    printf("3-Débito\n");
  
    
 return 0;   
}
