#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    int i;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <numero>\n", argv[0]);
        return 1;
    }

    int num = atoi(argv[1]);

    if (is_prime(num)) {
        printf("1 - O numero eh primo\n");
    } else {
        printf("0 - O numero nao eh primo\n");
    }

    return 0;
}