#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    char senha[100];
	int	sn;
    printf("Digite a senha: ");
    scanf("%s", senha);
	
    
	if (sn<8) {
        printf("Senha inv�lida. A senha deve ter pelo menos 8 caracteres, incluir uma letra mai�scula, uma letra min�scula, um n�mero e um caractere especial.\n");
	} else {    
    	printf("Senha v�lida.\n");
	}

    return 0;
}
