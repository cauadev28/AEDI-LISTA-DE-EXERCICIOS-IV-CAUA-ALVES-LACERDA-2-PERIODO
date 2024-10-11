#include <stdio.h>

void selectionSort(float notas[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (notas[j] > notas[max_idx]) {
                max_idx = j;
            }
        }
        float temp = notas[max_idx];
        notas[max_idx] = notas[i];
        notas[i] = temp;
    }
}

int main() {
    int n;

    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Número de alunos deve ser positivo.\n");
        return 1;
    }

    float notas[n];

    printf("Digite as notas dos alunos:\n");
    for (int i = 0; i < n; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    selectionSort(notas, n);

    printf("\nNotas ordenadas em ordem decrescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");

    return 0;
}
