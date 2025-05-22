#include <stdio.h>  // Inclusion de la bibliothèque standard pour les fonctions d'entrée/sortie

int main() {
    int nombre, original;  // Déclaration des variables : 'nombre' pour la saisie, 'original' pour garder la valeur d'origine
    int count = 0;         // Variable pour compter le nombre de chiffres

    // Lire l'entier
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {


        // Vérifie qu'il n'y a qu'un entier dans l'entrée (et rien d'autre)
        // Si sscanf lit plus qu'un entier (par ex : "123abc"), la condition échoue
        if (sscanf(buffer, "%d %c", &nombre, &extra) != 1) {
            printf("Erreur : entrée invalide. Veuillez entrer un entier uniquement.\n");

            return 1;  // Fin du programme avec une erreur
        }

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

    return 0;  // Fin normale du programme
}
