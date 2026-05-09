//Compute the transitive closure of a given directed graph using Warshall’s
//algorithm.
#include <stdio.h>

#define V 4 // Number of vertices in the graph

// Function to print the transitive closure matrix
void printSolution(int reach[][V]) {
    printf("Transitive closure matrix:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%d\t", reach[i][j]);
        }
        printf("\n");
    }
}

// Function to compute the transitive closure using Warshall'salgorithm
void transitiveClosure(int graph[][V]) {
    int reach[V][V];
// Initialize the transitive closure matrix with the input graph
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            reach[i][j] = graph[i][j];
// Update the transitive closure matrix
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
// If vertex k is on a path from i to j, update
                reach[i][j];
                reach[i][j] = reach[i][j] || (reach[i][k] && reach[k][j]);
            }
        }
    }
// Print the transitive closure matrix
    printSolution(reach);
}

// Driver program to test above function
int main() {
    int graph[V][V] = {{1, 1, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 1, 1},
                       {0, 0, 0, 1}};
// Call the function to compute the transitive closure
    transitiveClosure(graph);
    return 0;
}