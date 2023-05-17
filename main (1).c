#include <stdio.h>

int main() {
    int valor1, valor2, resultado, novoResultado;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    resultado = valor1 + valor2;

    if (resultado > 20) {
        novoResultado = resultado + 8;
        printf("A soma é maior que 20. O resultado é: %d\n", novoResultado);
    } else {
        novoResultado = resultado - 5;
        printf("A soma é menor ou igual a 20. O resultado é: %d\n", novoResultado);
    }

    return 0;
}