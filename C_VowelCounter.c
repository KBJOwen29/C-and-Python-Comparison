#include <stdio.h>
#include <ctype.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return 1;
    }
    return 0;
}

int main() {
    char text[100];
    int vowelCount = 0, consonantCount = 0;

    printf("Enter a word or sentence: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) { // only letters
            if (isVowel(text[i])) {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }

    printf("Total vowels: %d\n", vowelCount);
    printf("Total consonants: %d\n", consonantCount);

    return 0;
}
