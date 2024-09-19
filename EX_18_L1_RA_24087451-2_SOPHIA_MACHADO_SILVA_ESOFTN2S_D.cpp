#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int main(){
	int calc,juros,juros1,temp,temp1,total,total2;
	juros=0.16;
	juros1=0.20;
	temp=12;
	temp1=24;
	printf("Digite o valor que deseja investir: ");
	scanf("%d",&calc);
	total=(calc*juros)*temp;
	total2=calc+(calc*juros1)*temp1;
	
	printf("Com o valor de %d ,temos 2 opções de investimento:\n",calc);
	printf("12 meses com lucro de %d\n",total);
	printf("24 meses com lucro de %d\n",total2);

return 0;
}
	
