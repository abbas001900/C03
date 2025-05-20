#include <stdio.h>

int main() {
    unsigned long long limite;
    unsigned long long a = 0, b = 1;

    scanf("%llu", &limite);
    if (limite >= 0) {
        printf("%llu ", a);  // afficher le premier terme

        while (b <= limite) {
            printf("%llu ", b);
            unsigned long long suivant = a + b;
            a = b;
            b = suivant;
        }
    }

    return 0;
}
