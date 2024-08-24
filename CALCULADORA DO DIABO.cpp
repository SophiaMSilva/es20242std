#include<stdio.h>
#include<math.h>
double soma(double n1,double n2);
double sub(double n1,double n2);
double div(double n1,double n2);
double mult(double n1, double n2);
double media(double n1, double n2);
void eq2s(double a, double b, double c); 
int main(){
	double valor1,valor2,valor3;
	char op;
	printf("Escolha a operação:\n");
	printf("+adicao\n");
	printf("-subtracao\n");
	printf("*Multiplicacao\n");
	printf("/divisao\n");
	printf("m media\n");
	printf("s Equcao 2 grau\n");
	scanf("%c",&op);
	if(op != 's'){
	printf("Digite o primeiro numero:");
	scanf("%lf",&valor1);
	printf("Digite o segundo numero:");
	scanf("%lf",&valor2);
	}else{
	printf("Digite o valor de a:");
	scanf("%lf",&valor1);
	printf("Digite o valor de b:");
	scanf("%lf",&valor2);
	printf("Digite o valor de c:");
	scanf("%lf",&valor3);
	}
	
	
if(op=='+')printf("Soma=%.2f",soma(valor1,valor2));
else if(op=='-')printf("subtracao=%.2f",sub(valor1,valor2));
else if(op=='/')printf("div=%.2f",div(valor1,valor2));
else if(op=='*')printf("multiplicacao=%.2f",mult(valor1,valor2));
else if(op=='m')printf("m=%.2f",div(soma(valor1,valor2),2));
else if(op=='s')eq2s(valor1,valor2,valor3);
else{
	printf("Operação %c invalida",op);
}

	return 0;
}
void eq2s(double a, double b, double c){
	//double delta=sub(mult(b,b),mult(mult(4,a),c);
	double delta=sub(mult(b,b),mult(mult(4,a),c));
	printf("Delta=%.2f",delta);
}
double soma(double n1,double n2){
    return n1+n2;
}
double sub(double n1,double n2){
    return n1-n2;
}
double div(double n1,double n2){
    return n1/n2;
}
double mult(double n1,double n2){
    return n1*n2;
}
double media(double n1,double n2){
    //return (n1+n2)/2;
    return div(soma(n1,n2),2);
}
