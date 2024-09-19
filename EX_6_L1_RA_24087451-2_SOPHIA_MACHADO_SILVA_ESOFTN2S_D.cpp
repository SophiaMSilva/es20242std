#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Portuguese");

int q1,q2,q3,q4,q5;
float t1,t2,t3,t4,t5,total;
float produto1 = 1.99;
float desconto1 = 0.95;
float produto2 = 2.99;
float desconto2 = 0.90;
float produto3 = 3.99;
float desconto3 = 0.85;
float produto4 = 4.99;
float desconto4 = 0.80;
float produto5 = 5.99;
float desconto5 = 0.75;

printf("Digite a quantidade do Produto 1: ");
    scanf("%d", &q1);

printf("Digite a quantidade do Produto 2: ");
    scanf("%d", &q2);

    printf("Digite a quantidade do Produto 3: ");
    scanf("%d", &q3);

    printf("Digite a quantidade do Produto 4: ");
    scanf("%d", &q4);

    printf("Digite a quantidade do Produto 5: ");
    scanf("%d", &q5);

t1 = (produto1 * q1) * desconto1;
t2 = (produto2 * q2) * desconto2;
t3 = (produto3 * q3) * desconto3;
t4 = (produto4 * q4) * desconto4;
t5 = (produto5 * q5) * desconto5;

total = t1 + t2 + t3 + t4 + t5;


printf("O valor total de sua compra é: %.2f",total);

return 0;
}
