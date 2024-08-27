#include <stdio.h>

int trouverPlusPetit(int **tableau, int taille) {
   
    int *plusPetit = tableau[0];

   
    for (int i = 1; i < taille; i++) {
        if (*(tableau[i]) < *plusPetit) {
            plusPetit = tableau[i];
        }
    }

    
    return *plusPetit;
}

int main() {
    int a = 12, b = 5, c = 8, d = 1, e = 9, f = 20;

    
    int *tableau[] = {&a, &b, &c, &d, &e, &f};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    
    int min = trouverPlusPetit(tableau, taille);

    printf("Le plus petit élément du tableau est : %d\n", min);

    return 0;
}
