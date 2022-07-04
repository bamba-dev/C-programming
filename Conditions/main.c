#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("=== Menu ===\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac\n");
    printf("Quel est votre choix ?\n");

    scanf("%d", choixMenu);

    switch(choixMenu){
    case 1:
    printf("Vous avez choisi le Royal Cheese\n");
    break;

    case 2:
    printf("Vous avez choisi Mc Deluxe\n");
    break;

    case 3:
    printf("Vous avez choisi le Mc Bacon\n");
    break;

    case 4:
    printf("Vous avez choisi le Big Mac\n");
    break;

    default:
    printf("Vous n'avez pas rentre un nombre correct !");
    break;

    }



    return 0;
}
