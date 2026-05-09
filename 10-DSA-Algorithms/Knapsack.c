//.To find Optimal solution for a Knapsack Problem using Greedy Method.
#include <stdio.h>

struct Item {
    int weight;
    int value;
};

int compare(const void *a, const void *b) {
    double ratio_a = ((struct Item *) a)->value / (double) ((struct Item
    *) a)->weight;
    double ratio_b = ((struct Item *) b)->value / (double) ((struct Item
    *) b)->weight;
    return (ratio_b > ratio_a) - (ratio_b < ratio_a);
}

void knapsackGreedy(struct Item items[], int n, int capacity) {
    qsort(items, n, sizeof(struct Item), compare);
    int currentWeight = 0;
    double totalValue = 0.0;
    printf("Selected items:\n");
    for (int i = 0; i < n; i++) {
        if (currentWeight + items[i].weight <= capacity) {
            printf("Item %d - Weight: %d, Value: %d\n", i + 1,
                   items[i].weight, items[i].value);
            currentWeight += items[i].weight;
            totalValue += items[i].value;
        }
    }
    printf("Total Weight in Knapsack: %d\n", currentWeight);
    printf("Total Value in Knapsack: %.2lf\n", totalValue);
}

int main() {
    struct Item items[] = {{10, 60},
                           {20, 100},
                           {30, 120}};
    int n = sizeof(items) / sizeof(items[0]);
    int capacity = 50;
    printf("Knapsack Problem using Greedy Method:\n");
    knapsackGreedy(items, n, capacity);
    return 0;
}
