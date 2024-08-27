#include <stdio.h>
#include <iostream>

int trouverPlusPetit(int *tableau, int taille) {
    
    int *plusPetit = tableau;

    
    for (int i = 1; i < taille; i++) {
        if (*(tableau + i) < *plusPetit) {
            plusPetit = tableau + i;
        }
    }

    return *plusPetit;
}

int main() {
    int tableau[] = {12, 5, 8, 1, 9, 20};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

   
    int min = trouverPlusPetit(tableau, taille);

    printf("Le plus petit élément du tableau est : %d\n", min);

    return 0;
}
