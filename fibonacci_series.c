#include <stdio.h> // Bibliothèque standard pour les entrées/sorties (printf, scanf)

// Fonction pour afficher la suite de Fibonacci jusqu'à une certaine limite
void afficherFibonacci(unsigned long long limite) {
    unsigned long long a = 0; // Premier terme de la suite
    unsigned long long b = 1; // Deuxième terme de la suite

    printf("Fibonacci : %llu ", a); // Affiche le premier terme (0)

    // Boucle tant que le terme courant b est inférieur ou égal à la limite
    while (b <= limite) {
        printf("%llu ", b); // Affiche le terme actuel

        // Calcul du terme suivant de la suite
        unsigned long long suivant = a + b;

        // Mise à jour des variables pour passer au prochain couple (a, b)
        a = b;
        b = suivant;
    }

    printf("\n"); // Saut de ligne à la fin de l'affichage
}

int main() {
    long long saisie; // Utilisation de "long long" pour détecter les valeurs négatives

    // Lecture de la valeur entrée par l'utilisateur
    if (scanf("%lld", &saisie) != 1) {
        // Si la saisie n'est pas un nombre (ex : une lettre), afficher un message d'erreur
        printf("Erreur : valeur non valide.\n");
        return 1; // Fin du programme avec une erreur
    }

    // Si l'utilisateur entre un nombre négatif
    if (saisie < 0) {
        printf("Erreur : la valeur ne doit pas être négative.\n");
        return 1; // Fin du programme avec une erreur
    }

    // Appel de la fonction avec la valeur convertie en non-signé
    afficherFibonacci((unsigned long long)saisie);

    return 0; // Fin du programme avec succès
}
