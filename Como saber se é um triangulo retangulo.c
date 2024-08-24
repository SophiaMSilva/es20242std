#include<stdio.h>
int main(){
    int l1,l2,l3
    printf("Digite 3 Lados de um triangulo");
    scanf("%d%d%d",&l1,&l2,&l3);
    l1=l1*l1;
    l2=l2*l2;
    l3=l3*l3;
    if(l1==l2+l3||l2==l1+l3||l3==l1+l2) printf("E um triangulo retangulo");
    else printf("Não é trianglo retangulo")
    return 0;
}