#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
	int n1;
    printf("Digite um n�mero: ");
    scanf("%d", &n1);

    if (n1 <= 1) {
        printf("%d n�o � um n�mero primo.\n", n1);
    } else if (n1 == 2) {
        printf("%d � um n�mero primo.\n", n1);
    } else if (n1 % 2 == 0) {
        printf("%d n�o � um n�mero primo.\n", n1);
    } else if (n1 == 3) {
        printf("%d � um n�mero primo.\n", n1);
    } else if (n1 % 3 == 0) {
        printf("%d n�o � um n�mero primo.\n", n1);
    } else if (n1 == 5) {
        printf("%d � um n�mero primo.\n", n1);
    } else if (n1 % 5 == 0) {
        printf("%d n�o � um n�mero primo.\n", n1);
    } else if (n1 == 7) {
        printf("%d � um n�mero primo.\n", n1);
    } else if (n1 % 7 == 0) {
        printf("%d n�o � um n�mero primo.\n", n1);
    } else if (n1 == 11) {
        printf("%d � um n�mero primo.\n", n1);
    } else if (n1 % 11 == 0) {
        printf("%d n�o � um n�mero primo.\n", n1);
    } else if (n1 == 13) {
        printf("%d � um n�mero primo.\n", n1);
    } else if (n1 % 13 == 0) {
        printf("%d n�o � um n�mero primo.\n", n1);
    } else if (n1 == 17) {
        printf("%d � um n�mero primo.\n", n1);
    } else if (n1 % 17 == 0) {
        printf("%d n�o � um n�mero primo.\n", n1);
    } else {
        printf("%d � um n�mero primo.\n", n1);
    }

    return 0;
}
