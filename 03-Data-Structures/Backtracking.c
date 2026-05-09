//Find a subset of a given set S = {s1,s2,s3,....sn} of n positive integers whose sum is
//equal to a given positive integer d. For example, if S= {1, 2, 5, 6, 8} and d = 9 there are
//two solutions{1,2,6}and{1,8}.A suitable message is to be displayed if the given
//problem instance doesn't have a solution.
#include <stdio.h>

#define MAX_SIZE 100

// Function to check if a subset with the given sum exists
int isSubsetSum(int set[], int n, int sum, int subset[], int
subsetSize) {
    if (sum == 0) {
// If the subset sum is equal to the target sum, print thesubset
        printf("Subset found: { ");
        for (int i = 0; i < subsetSize; i++) {
            printf("%d ", subset[i]);
        }
        printf("}\n");
        return 1;
    }
    if (n == 0 && sum != 0)
        return 0;
// Exclude the last element and recur
    if (set[n - 1] > sum)
        return isSubsetSum(set, n - 1, sum, subset, subsetSize);
// Consider the possibility of including the last element
    subset[subsetSize] = set[n - 1];
    return isSubsetSum(set, n - 1, sum - set[n - 1], subset, subsetSize
                                                             + 1) ||
           isSubsetSum(set, n - 1, sum, subset, subsetSize);
}

// Function to find subsets with the given sum
void findSubsets(int set[], int n, int sum) {
    int subset[MAX_SIZE];
    if (!isSubsetSum(set, n, sum, subset, 0)) {
        printf("No subset with the given sum exists.\n");
    }
}

// Driver program to test above function
int main() {
    int set[] = {1, 2, 5, 6, 8};
    int n = sizeof(set) / sizeof(set[0]);
    int sum = 9;
    findSubsets(set, n, sum);
    return 0;
}