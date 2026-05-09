//Given two sequences, find the length of longest subsequence present in both of
//them. A subsequence is a sequence that appears in the same relative order, but not
//necessarily contiguous. For example, “abc”, “abg”, “bdf”, “aeg”, ‘”acefg” etc are
//subsequences of “abcdefg”:
//i) Write a program to perform count sort.
//ii) Write a program to perform radix sort.
#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the length of the longest common subsequence
int longestCommonSubsequence(char *X, char *Y, int m, int n) {
    int LCS[m + 1][n + 1];
// Build the LCS matrix in a bottom-up manner
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                LCS[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                LCS[i][j] = LCS[i - 1][j - 1] + 1;
            else
                LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
        }
    }
// LCS[m][n] contains the length of the longest common subsequence
    return LCS[m][n];
}

// Driver program to test above function
int main() {
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";
    int m = sizeof(X) - 1; // length of X
    int n = sizeof(Y) - 1; // length of Y
    printf("Length of Longest Common Subsequence: %d\n",
           longestCommonSubsequence(X, Y, m, n));
    return 0;
}