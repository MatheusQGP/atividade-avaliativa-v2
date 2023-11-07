#include <stdio.h>

int ehPrimo(int num) {
    if (num <= 1) {
        return 0;  
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  
        }
    }

    return 1; 
}

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (ehPrimo(num)) {
        printf("%d e um numero primo.\n", num);
    } else {
        printf("%d nao e um numero primo.\n", num);
    }

    return 0;
}

