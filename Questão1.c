#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    switch (idade / 18) {
        case 0:
            if (idade < 0) {
                printf("Idade inválida.\n");
            } else {
                printf("Menor de idade.\n");
            }
            break;
        case 1:
        case 2:
        case 3:
            printf("Maior de idade.\n");
            break;
        default:
            if (idade > 65) {
                printf("Idoso.\n");
            } else {
                printf("Idade inválida.\n");
            }
            break;
    }

    return 0;
}
