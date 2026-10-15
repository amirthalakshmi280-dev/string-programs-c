#include <stdio.h>

int main() {
    char s[100];
    int seen[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%99s", s);

    printf("String after removing duplicates: ");

    for (i = 0; s[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)s[i];

        if (seen[ch] == 0) {
            printf("%c", s[i]);
            seen[ch] = 1;
        }
    }

    printf("\n");

    return 0;
}
Enter a string: programming
String after removing duplicates: progamin
