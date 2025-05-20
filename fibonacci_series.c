#include <stdio.h>

// Fonction qui génère la suite de Fibonacci jusqu'à une limite donnée
void afficherFibonacci(int limite) {
    int a = 0, b = 1;

    // Affiche les deux premiers termes si la limite est supérieure à 0
    if (limite >= 0) {
        printf("%d", a);
    }

    while (b <= limite) {
        printf(" %d", b);
        int temp = a + b;
        a = b;
        b = temp;
    }

    printf("\n"); // Fin de ligne après la série
}

int main() {
    int limite;


    if (scanf("%d", &limite) != 1 || limite < 0) {
        printf("Entrée invalide. Veuillez entrer un entier positif.\n");
        return 1; // Retour avec erreur
    }

    afficherFibonacci(limite);

    return 0; // Fin normale du programme
}
