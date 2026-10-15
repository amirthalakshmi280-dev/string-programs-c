#include <stdio.h>
#include <string.h>

int main() {
    char s[100], result[100];
    int i, left, right, start = 0, maxLen = 1;
    int len;

    printf("Enter a string: ");
    scanf("%99s", s);

    len = strlen(s);

    for (i = 0; i < len; i++) {
        left = i;
        right = i;

        while (left >= 0 && right < len &&
               s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                maxLen = right - left + 1;
                start = left;
            }
            left--;
            right++;
        }

        left = i;
        right = i + 1;

        while (left >= 0 && right < len &&
               s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                maxLen = right - left + 1;
                start = left;
            }
            left--;
            right++;
        }
    }

    strncpy(result, s + start, maxLen);
    result[maxLen] = '\0';

    printf("Longest Palindromic Substring: %s\n", result);

    return 0;
}
