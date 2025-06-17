// Given a string called TEXT with ‘n’ characters and another string called PATTERN
//with ‘m’ characters (m<=n) .Write a program which implements brute force string
//matching to search for a given pattern in the text. If the pattern is present then find
//the position of first occurrences of Pattern in that Text.
#include <stdio.h>
#include <string.h>

int bruteForceSearch(char text[], char pattern[]) {
    int n = strlen(text);
    int m = strlen(pattern);
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == m)
            return i; // Pattern found at position i
    }
    return -1; // Pattern not found
}

int main() {
    char text[] = "This is a simple example for string matching.";
    char pattern[] = "example";
    int position = bruteForceSearch(text, pattern);
    if (position != -1)
        printf("Pattern found at position: %d\n", position);
    else
        printf("Pattern not found in the text.\n");
    return 0;
}
