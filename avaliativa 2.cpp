#include <stdio.h>

int main() {
    int i;
    int n;
    int n_maior = 0;

    for (i = 0; i < 3; i++) {
        printf("Digite um n�mero inteiro: ");
        scanf("%d", &n);

        if (n > n_maior) {
            n_maior = n;
        }
    }

    printf("O maior n�mero digitado foi: %d", n_maior);

    return 0;
}


