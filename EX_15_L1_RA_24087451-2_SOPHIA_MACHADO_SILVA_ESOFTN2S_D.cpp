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
        printf("Senha inválida. A senha deve ter pelo menos 8 caracteres, incluir uma letra maiúscula, uma letra minúscula, um número e um caractere especial.\n");
	} else {    
    	printf("Senha válida.\n");
	}

    return 0;
}
