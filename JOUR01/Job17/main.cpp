#include <iostream>
#include <cstdlib>  // Pour srand() et rand()
#include <ctime>    // Pour time()

// Déclaration de l'énumération Specialite
enum Specialite { IA, Web, Logiciel, SystemeImmersif, Cybersecurite, TotalSpecialites };

// Fonction pour afficher le nom d'une spécialité et le nombre de places disponibles
void afficherSpecialite(Specialite spec, int nbEtudiants) {
    // Afficher le nom de la spécialité en fonction de la valeur de l'énumération
    switch (spec) {
        case IA:
            std::cout << "IA: ";
            break;
        case Web:
            std::cout << "Web: ";
            break;
        case Logiciel:
            std::cout << "Logiciel: ";
            break;
        case SystemeImmersif:
            std::cout << "Système Immersif: ";
            break;
        case Cybersecurite:
            std::cout << "Cybersécurité: ";
            break;
        default:
            std::cout << "Spécialité inconnue: ";
            break;
    }
    // Afficher le nombre d'étudiants dans cette spécialité
    std::cout << nbEtudiants << " étudiants inscrits." << std::endl;
}

int main() {
    // Initialiser le générateur de nombres aléatoires
    std::srand(std::time(0));

    // Tableau pour stocker le nombre d'étudiants pour chaque spécialité
    int nombreEtudiants[TotalSpecialites];

    // Initialiser le tableau avec un nombre d'étudiants aléatoire (entre 12 et 66) pour chaque spécialité
    for (int i = 0; i < TotalSpecialites; i++) {
        nombreEtudiants[i] = 12 + std::rand() % 55;  // Valeurs aléatoires entre 12 et 66
    }

    // Parcourir le tableau et afficher chaque spécialité avec le nombre d'étudiants
    for (int i = 0; i < TotalSpecialites; i++) {
        afficherSpecialite(static_cast<Specialite>(i), nombreEtudiants[i]);
    }

    return 0;
}
