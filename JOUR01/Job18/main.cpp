#include <iostream>

// Fonction pour ajouter un élément à un tableau d'entiers
void addElement(int*& tableau, int& taille, int element) {
    // Créer un nouveau tableau avec une taille augmentée de 1
    int* nouveauTableau = new int[taille + 1];

    // Copier les éléments de l'ancien tableau vers le nouveau
    for (int i = 0; i < taille; i++) {
        nouveauTableau[i] = tableau[i];
    }

    // Ajouter le nouvel élément à la fin du nouveau tableau
    nouveauTableau[taille] = element;

    // Libérer la mémoire de l'ancien tableau
    delete[] tableau;

    // Pointer vers le nouveau tableau et mettre à jour la taille
    tableau = nouveauTableau;
    taille++;
}

// Fonction pour afficher un tableau d'entiers
void showTable(int* tableau, int taille) {
    for (int i = 0; i < taille; i++) {
        std::cout << tableau[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Créer un tableau d'entiers vide avec une capacité initiale de 5 éléments
    int taille = 0; // Taille initiale du tableau
    int* tableau = new int[0]; // Tableau vide au début

    // Ajouter des éléments au tableau à l'aide de la fonction addElement
    addElement(tableau, taille, 10);
    addElement(tableau, taille, 20);
    addElement(tableau, taille, 30);
    addElement(tableau, taille, 40);
    addElement(tableau, taille, 50);

    // Afficher le tableau à l'aide de la fonction showTable
    std::cout << "Tableau après ajout des éléments : ";
    showTable(tableau, taille);

    // Libérer la mémoire du tableau avant de quitter
    delete[] tableau;

    return 0;
}
