#include <stdio.h>

int main() {
    unsigned long long limite;
    if (scanf("%llu", &limite) == 1) {
        unsigned long long a = 0, b = 1, f = 0;

        if (limite == 0) {
            printf("0");
        } else {
            printf("0 ");
            while (b <= limite) {
                printf("%llu ", b);
                f = a + b;
                a = b;
                b = f;
            }
        }
    } else {
        printf("Nombre invalide\n");
    }

    return 0;
}
