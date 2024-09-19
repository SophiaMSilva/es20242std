#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    
int q1,q2,q3,q4,q5;
float t1,t2,t3,t4,t5,total;
float livro1 = 1.99;
float desconto1 = 0.95;
float livro2 = 2.99;
float desconto2 = 0.90;
float livro3 = 3.99;
float desconto3 = 0.85;
float livro4 = 4.99;
float desconto4 = 0.80;
float livro5 = 5.99;
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

t1 = (livro1 * q1) * desconto1;
t2 = (livro2 * q2) * desconto2;
t3 = (livro3 * q3) * desconto3;
t4 = (livro4 * q4) * desconto4;
t5 = (livro5 * q5) * desconto5;

total = t1 + t2 + t3 + t4 + t5;


printf("O valor total de seus livros é: %.2f",total);

return 0;
}
