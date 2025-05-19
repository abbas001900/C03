#include <stdio.h>

int main(void) {
    int limit;
    if (scanf("%d", &limit) == 1) {

        int nb1 = 0, nb2 = 1;

        int suite = nb1 + nb2;
        while (suite < limit) {
            if (limit > 0 && limit > 1) {
                printf("%d ", nb1);
                printf("%d ", suite);
                nb1 = nb2;
                nb2 = suite;
                suite = nb1 + nb2;
                
            }
        }
        printf("\n");
    }
    else {
        printf("Entrez un nombre valide");
    }


    return 0;
}
