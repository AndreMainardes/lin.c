
 

#include <stdio.h>

int main() {
    char nome[50];
    float nota1, nota2, media;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("\n");
    printf("Nome: %s\n", nome);
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Média: %.2f\n", media);

    if (media >= 6) {
        printf("Aprovado.\n");
    } else {
        printf("Reprovado.\n");
    }

    return 0;
}