
#include <stdio.h>

int main() {
    int num1, num2, num3, resultado;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &num3);

    resultado = num1 + num2 + num3;

    if (resultado > 10) {
        printf("A soma dos números é maior que 10. O resultado é: %d\n", resultado);
    }

    return 0;
}
