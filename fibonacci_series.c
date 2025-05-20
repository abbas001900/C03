#include <stdio.h>
#include <math.h>

int fibonacci(int n) {
    double ti = (1 - sqrt(5)) / 2;
    double phi = (1 + sqrt(5)) / 2;
    double fn = (1 / sqrt(5)) * (pow(phi, n) - pow(ti, n));
    return (int)floor(fn + 0.5);  // +0.5 pour arrondir correctement
}

int main() {
    int limite;
    if (scanf("%d", &limite) == 1) {
        int n = 0;
        int f;
        do {
            f = fibonacci(n);
            if (f <= limite)
                printf("%d ", f);
            n++;
        } while (f < limite);
    } else {
        printf("Nombre invalide\n");
    }

    return 0;
}
