#include <stdio.h>
#include<locale.h>
int main (){
setlocale(LC_ALL ,"Portuguese");
int n1;
char a;
printf("Digite seu salario:");
scanf("%d",&n1);
printf("Digite sua classificação:\n");
printf("A\n");
printf("B\n");
printf("C\n");
scanf(" %c",&a);

	if (a == 'A'){
		n1=n1+n1*0.15;
		printf("Seu salario possui um bonus de 15%%: %d",n1);
	} else if (a == 'B'){
		n1=n1+n1*0,1;
		printf("Seu salario possui um bonus de 10%%: %d",n1);
	} else if ( a == 'C'){
		n1=n1+n1*0.05;
		printf("Seu salario possui um bonos de 5%%: %d",n1);
	} else{
		printf("Selecione A , B ou C");
}

return 0;	
}
