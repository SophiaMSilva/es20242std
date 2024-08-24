#include<stdio.h> //Switch case
int main(){
    double n1,n2,n3;
    char op;
    printf("Digite a operação + - * /\n");
    scanf("%c",&op);
    printf("Digite dois numeros")
    scanf("%lf%lf,"&n1,n2);
    switch(op){
            case's':
                printf("soma=%f",n1+n2);
                break;
            case'-':
                printf("subtração=%f",n1-n2);
                break;
            case'*':
                printf("Mult=%f",n1*n2);
                break;
            case'/':
                printf("Divisão=%f",n1/n2);
                break;
            default:
                printf("A operação não existe");

    }
}