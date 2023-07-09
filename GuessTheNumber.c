#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    srand(time(0));  // Initialise le générateur de nombres aléatoires avec une graine basée sur l'heure actuelle
    number = rand() % 100 + 1;  // Génère un nombre aléatoire entre 1 et 100

    printf("Bienvenue dans Guess the Number!\n");
    printf("Je pense à un nombre entre 1 et 100. Pouvez-vous le deviner?\n");

    do {
        printf("Entrez votre estimation : ");
        scanf("%d", &guess);

        attempts++;

        if (guess > number) {
            printf("Trop grand!\n");
        } else if (guess < number) {
            printf("Trop petit!\n");
        } else {
            printf("Félicitations! Vous avez deviné le nombre en %d tentatives!\n", attempts);
        }
    } while (guess != number);

    return 0;
}
