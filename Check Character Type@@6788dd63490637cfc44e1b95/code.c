#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ||
            (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    } else {
        printf("Special character");
    }
    
    return 0;
}
