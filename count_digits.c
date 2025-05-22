#include <stdio.h>  // Inclusion de la bibliothèque standard pour les fonctions d'entrée/sortie

int main() {
    int nombre, original;  // Déclaration des variables : 'nombre' pour la saisie, 'original' pour garder la valeur d'origine
    int count = 0;         // Variable pour compter le nombre de chiffres

    // Lire l'entier
    if (scanf("%d", &nombre) == 1) {  // Vérifie que l'utilisateur a bien saisi un entier

        original = nombre;  // Sauvegarder la valeur d'origine pour l'affichage final

        // Si l'utilisateur entre 0, il contient 1 chiffre
        if (nombre == 0) {
            count = 1;
        } else {
            // Rendre le nombre positif si c'est un nombre négatif
            if (nombre < 0) {
                nombre = -nombre;  // Inversion du signe pour éviter les erreurs de calcul
            }

            // Compter les chiffres
            while (nombre != 0) {
                nombre = nombre / 10;  // Retire le dernier chiffre (division entière)
                count++;               // Incrémente le compteur de chiffres
            }
        }

        // Afficher le résultat
        printf("%d contient %d chiffre(s).\n", original, count);  // Affiche le nombre initial et son nombre de chiffres
    }
    else {
        printf("Entrez un nombre valide");  // Message d'erreur si la saisie échoue
    }

    return 0;  // Fin normale du programme
}
