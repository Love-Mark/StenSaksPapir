#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int computer, user;

    // Initialiserer tilfældighedsgeneratoren
    srand(time(0));

    // Genererer computerens valg
    computer = rand() % 5 + 1;

    // Brugerens input
    printf("Valg:\n1. Sten\n2. Saks\n3. Papir\n4. Spock\n5. Lizard\n");
    scanf("%d", &user);

    // Viser valget af computeren
    switch (computer) {
        case 1:
            printf("Computeren valgte Sten.\n");
            break;
        case 2:
            printf("Computeren valgte Saks.\n");
            break;
        case 3:
            printf("Computeren valgte Papir.\n");
            break;
        case 4:
            printf("Computeren valgte Spock.\n");
            break;
        case 5:
            printf("Computeren valgte Lizard.\n");
            break;
    }

    // Viser brugerens valg
    switch (user) {
        case 1:
            printf("Du valgte Sten.\n");
            break;
        case 2:
            printf("Du valgte Saks.\n");
            break;
        case 3:
            printf("Du valgte Papir.\n");
            break;
        case 4:
            printf("Du valgte Spock\n");
            break;
        case 5:
            printf("Du valgte Lizard.\n");
            break;
    }

    // Viser resultatet
    if (user == computer) {
        printf("Uafgjort!\n");
    } else if ((user == 1 && computer == 2) || (user == 2 && computer == 3) || (user == 3 && computer == 1) || (user == 4 && computer == 2) || (user == 2 && computer == 5) || (user == 5 && computer == 4) || (user == 4 && computer == 1) || (user == 1 && computer == 5) || (user == 5 && computer == 3))
        printf("Du vandt!\n");
    else {
        printf("Du tabte!\n");
    }
    return 0;
}
