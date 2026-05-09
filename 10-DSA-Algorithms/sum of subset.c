// Implement the sum of subset problem using NP-complete.

#include <stdio.h>

// Function to print the subset with the sum
void printSubset(int subset[], int subsetSize) {
    printf("Subset with the sum: { ");
    for (int i = 0; i < subsetSize; i++) {
        printf("%d ", subset[i]);
    }
    printf("}\n");
}

// Recursive function to find the subset with the given sum
void subsetSumUtil(int set[], int n, int subset[], int subsetSize, int
sum, int targetSum) {
    if (sum == targetSum) {
        printSubset(subset, subsetSize);
        return;
    }
    for (int i = n - 1; i >= 0; i--) {
        if (sum + set[i] <= targetSum) {
            subset[subsetSize] = set[i];
            subsetSumUtil(set, i, subset, subsetSize + 1, sum + set[i],
                          targetSum);
        }
    }
}

// Function to initialize the subsetSumUtil function
void subsetSum(int set[], int n, int targetSum) {
    int subset[n];
    subsetSumUtil(set, n, subset, 0, 0, targetSum);
}

// Driver program to test the above functions
int main() {
    int set[] = {10, 7, 5, 18, 12, 20, 15};
    int n = sizeof(set) / sizeof(set[0]);
    int targetSum = 35;
    subsetSum(set, n, targetSum);
    return 0;
}
