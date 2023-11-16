// this code is for finding out zodiac signs
#include <stdio.h>

void determineZodiacSign(int day, int month) {
    if ((month == 3 && day >= 22) || (month == 4 && day <= 20)) {
        printf("Aries (Mesha)\n");
    } else if ((month == 4 && day >= 21) || (month == 5 && day <= 20)) {
        printf("Taurus (Vrishabha)\n");
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        printf("Gemini (Mithuna)\n");
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        printf("Cancer (Karka)\n");
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        printf("Leo (Simha)\n");
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("Virgo (Kanya)\n");
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        printf("Libra (Tula)\n");
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        printf("Scorpio (Vrishchika)\n");
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        printf("Sagittarius (Dhanu)\n");
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        printf("Capricorn (Makara)\n");
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("Aquarius (Kumbha)\n");
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        printf("Pisces (Meena)\n");
    } else {
        printf("Invalid date\n");
    }
}

int main() {
    int day, month, choice;
    char continueChoice;

    do {
        printf("1. Determine Zodiac Sign\n");
        printf("2. Exit\n");

        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter your date of birth (DD MM): ");
                scanf("%d %d", &day, &month);
                determineZodiacSign(day, month);
                break;
            case 2:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Exiting the program.\n");
                break;
        }

        if (choice == 2) {
            break;  // Exit the loop if the user chose to exit
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &continueChoice);  // Note the space before %c to consume the newline character

    } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}
