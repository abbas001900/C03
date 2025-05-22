#include <stdio.h>

int main(void) {
    int limit;
    scanf("%d", &limit);

    int nb1 = 0, nb2 = 1;

    if (limit >= 0) {
        printf("%d ", nb1);
    }
    if (limit >= 1) {
        printf("%d ", nb2);
    }

    int suite = nb1 + nb2;
    while (suite <= limit) {
        printf("%d ", suite);
        nb1 = nb2;
        nb2 = suite;
        suite = nb1 + nb2;
    }

    return 0;
}