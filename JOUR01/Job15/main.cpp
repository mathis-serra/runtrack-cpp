#include <iostream>
#include <cstring> // Pour utiliser strcmp()

// Fonction pour trier un tableau de chaînes de caractères en utilisant des pointeurs
void MySortString(char *tableau[], int taille) {
    // Tri par sélection
    for (int i = 0; i < taille - 1; i++) {
        // Trouver l'index de la plus petite chaîne de caractères dans le tableau
        char **min = &tableau[i]; // Utilisation de pointeur vers pointeur
        
        for (int j = i + 1; j < taille; j++) {
            if (strcmp(*min, tableau[j]) > 0) {
                min = &tableau[j]; // Mettre à jour le pointeur si une plus petite chaîne est trouvée
            }
        }

        // Échanger les pointeurs des chaînes de caractères
        if (min != &tableau[i]) {
            char *temp = tableau[i];
            tableau[i] = *min;
            *min = temp;
        }
    }
}

// Fonction pour afficher le tableau de chaînes de caractères
void PrintArray(char *tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        std::cout << tableau[i] << std::endl;
    }
}

int main() {
    // Tableau de chaînes de caractères à trier
    char *tableau[] = {"pomme", "orange", "banane", "kiwi", "ananas", "mangue"};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    std::cout << "Tableau avant le tri :\n";
    PrintArray(tableau, taille);

    // Trier le tableau de chaînes de caractères
    MySortString(tableau, taille);

    std::cout << "\nTableau après le tri :\n";
    PrintArray(tableau, taille);

    return 0;
}
