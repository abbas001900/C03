#include <stdio.h>

void afficherFibonacci(unsigned long long limite) {
    unsigned long long a = 0;
    unsigned long long b = 1;

    printf("Fibonacci : %llu ", a);  // affiche le premier terme

    while (b <= limite) {
        printf("%llu ", b);
        unsigned long long suivant = a + b;
        a = b;
        b = suivant;
    }

    printf("\n");
}

int main() {
    unsigned long long limite;

    scanf("%llu", &limite);

    afficherFibonacci(limite);

    return 0;
}
