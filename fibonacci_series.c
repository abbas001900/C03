#include <stdio.h>

int main() {
    int a, b, limite;
    if (scanf("%d", &limite) == 1) {

        a = 0, b = 1;
        if (limite == 0) {
            printf("%d", a);

        }else {
            while (a <= limite) {
                printf("%d ", a);
                int temp = a + b;
                a = b;
                b = temp;
            }
        }
    }else {
        printf("Nombre invalide");
    }

    return 0;
}
