#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 5 == 0) {
        printf("O número %d é divisivel de 5.\n", numero);
    } else {
        printf("O número %d não é divisivel de 5.\n", numero);
    }

    return 0;
}