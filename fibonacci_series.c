#include <stdio.h>

int main() {
    int n; // nombre de termes à afficher

    scanf("%d", &n);

    int a = 0, b = 1;

    printf("Suite de Fibonacci :\n");

    for (int i = 0; i <= n; i++) {
        printf("%d ", a);
        int temp = a + b;
        a = b;
        b = temp;
    }

    printf("\n");
    return 0;
}
