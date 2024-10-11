#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("Números pares entre 1 e %d:\n", numero);
        
        for (int i = 2; i <= numero; i += 2) {
            printf("%d ", i);
        }
        printf("\n");
    } else {
        printf("Por favor, digite um número positivo.\n");
    }

    return 0;
}
