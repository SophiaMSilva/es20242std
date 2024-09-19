#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int main(){
setlocale(LC_ALL,"Portuguese");
char rlogin [50];
char rsenha [50];
char login [50];
char senha [50];
printf ("Registre seu Login : ");
scanf ("%s",&rlogin);

printf ("Registre sua senha : ");
scanf ("%s",&rsenha);

printf("Digite seu Login : ");
scanf("%s",&login);

printf("Digite sua senha : ");
scanf("%s",&senha);

	if(strcmp(login,rlogin) == 0 && strcmp ( senha, rsenha) == 0){
		printf("Acesso Liberado,Bem vindo");
	}else{
		printf("Acesso Negado, pena nega");
	}
return 0;
}
