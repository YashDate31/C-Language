#include <stdio.h>

int main() {
    char letter;

    // Ask user for input
    printf("Enter a letter: ");
    scanf("%c", &letter);

    // Use switch to check for vowels
    switch(letter) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowel.\n", letter);
            break;
        default:
            printf("%c is Consonent.\n", letter);
            break;
    }

    return 0;
}
