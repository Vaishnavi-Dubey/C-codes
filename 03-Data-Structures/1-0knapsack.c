//. Implement the 1/0 knapsack problem using branch and bound.

#include <stdio.h>
#include <stdlib.h>

// Structure to represent items
struct Item {
    int weight;
    int value;
    float ratio; // Value-to-weight ratio
};

// Function to compare items based on ratio for sorting
int compare(const void *a, const void *b) {
    float ratioA = ((struct Item *) a)->ratio;
    float ratioB = ((struct Item *) b)->ratio;
    return (ratioB > ratioA) ? 1 : -1;
}

// Function to solve 0/1 Knapsack using Branch and Bound
float knapsackBranchAndBound(int capacity, struct Item items[], int n) {
// Sort items based on the value-to-weight ratio
    qsort(items, n, sizeof(items[0]), compare);
// Initialize variables
    int *included = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        included[i] = 0;
    float maxProfit = 0.0;
    int currentWeight = 0;
    int currentIndex = 0;
// Loop through the items
    while (currentIndex < n && currentWeight +
                               items[currentIndex].weight <= capacity) {
        included[currentIndex] = 1;
        currentWeight += items[currentIndex].weight;
        maxProfit += items[currentIndex].value;
        currentIndex++;
    }
// Consider the fractional part of the last item
    if (currentIndex < n)
        included[currentIndex] = (capacity - currentWeight) /
                                 (float) items[currentIndex].weight;
// Print the result
    printf("Included items:\n");
    for (int i = 0; i < n; i++) {
        if (included[i] > 0) {
            printf("Item %d: %.2f units\n", i + 1, included[i]);
        }
    }
    free(included);
    return maxProfit;
}

// Driver program to test the above function
int main() {
    int capacity = 50;
    struct Item items[] = {
            {10, 60,  0},
            {20, 100, 0},
            {30, 120, 0}
    };
    int n = sizeof(items) / sizeof(items[0]);
    float maxProfit = knapsackBranchAndBound(capacity, items, n);
    printf("\nMaximum profit: %.2f\n", maxProfit);
    return 0;
}