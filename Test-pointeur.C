#include <stdio.h>
#include <stdlib.h> // Inclure la bibliothèque standard pour la fonction malloc()

int main() {
    int n; // Déclarer une variable pour stocker la taille du tableau
    printf("Entrez la taille du tableau : "); // Demander à l'utilisateur la taille du tableau
    scanf("%d", &n); // Lire la taille du tableau depuis l'entrée standard et la stocker dans la variable n

    int* tableau = (int*)malloc(n * sizeof(int)); // Allouer dynamiquement de la mémoire pour le tableau
    if (tableau == NULL) { // Vérifier si l'allocation de mémoire a réussi
        printf("Erreur d'allocation de mémoire.\n"); // Afficher un message d'erreur si l'allocation a échoué
        return 1; // Quitter le programme avec un code d'erreur
    }

    for (int i = 0; i < n; i++) { // Initialiser les éléments du tableau avec des valeurs de 0 à n-1
        tableau[i] = i;
    }

    printf("Tableau : ");
    for (int i = 0; i < n; i++) { // Afficher le contenu du tableau
        printf("%d ", tableau[i]);
    }

    free(tableau); // Libérer la mémoire allouée pour le tableau
    return 0; // Quitter le programme avec un code de succès
}
