#include <stdio.h>

int main() {
    int limite;
    scanf("%d", &limite);

    int a = 0, b = 1;

    while (a <= limite) {
        printf("%d ", a);
        int temp = a + b;
        a = b;
        b = temp;
    }

    return 0;
}
