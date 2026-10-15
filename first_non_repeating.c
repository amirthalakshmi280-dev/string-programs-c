#include <stdio.h>

int main() {
    char s[100];
    int freq[256] = {0};
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%99s", s);

    for (i = 0; s[i] != '\0'; i++) {
        freq[(unsigned char)s[i]]++;
    }

    for (i = 0; s[i] != '\0'; i++) {
        if (freq[(unsigned char)s[i]] == 1) {
            printf("First Non-Repeating Character: %c\n",
                   s[i]);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("-1\n");
    }

    return 0;
}


Enter a string: swiss
First Non-Repeating Character: w
