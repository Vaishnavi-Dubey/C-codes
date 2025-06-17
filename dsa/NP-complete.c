//Implement the Hamiltonian cycle problem using NP-complete.
#include <stdio.h>
#include <stdbool.h>

#define V 5 // Number of vertices

void printSolution(int path[V]);
// Check if the vertex can be added to the Hamiltonian Cycle
bool isSafe(int v, int graph[V][V], int path[V], int pos) {
// Check if the vertex is adjacent to the last added vertex
    if (!graph[path[pos - 1]][v])
        return false;
// Check if the vertex has not already been included
    for (int i = 0; i < pos; i++)
        if (path[i] == v)
            return false;
    return true;
}
// Recursive function to find Hamiltonian Cycle
bool hamCycleUtil(int graph[V][V], int path[V], int pos) {
    if (pos == V) {
// Check if there is an edge from the last added vertex to the first vertex
        if (graph[path[pos - 1]][path[0]] == 1)
            return true;
        else
            return false;
    }
    for (int v = 1; v < V; v++) {
        if (isSafe(v, graph, path, pos)) {
            path[pos] = v;
            if (hamCycleUtil(graph, path, pos + 1) == true)
                return true;
// If adding the vertex doesn't lead to a solution,backtrack
            path[pos] = -1;
        }
    }
    return false;
}

// Function to find Hamiltonian Cycle in the given graph
void hamCycle(int graph[V][V]) {
    int path[V];
    for (int i = 0; i < V; i++)
        path[i] = -1;
// Start from the first vertex (0)
    path[0] = 0;
    if (hamCycleUtil(graph, path, 1) == false) {
        printf("Solution does not exist.\n");
        return;
    }
    printf("Hamiltonian Cycle:\n");
    printSolution(path);
}

// Function to print the solution
void printSolution(int path[V]) {
    for (int i = 0; i < V; i++)
        printf("%d ", path[i]);
// Print the first vertex again to show the complete cycle
    printf("%d\n", path[0]);
}

// Driver program to test above functions
int main() {
    int graph[V][V] = {
            {0, 1, 0, 1, 0},
            {1, 0, 1, 1, 1},
            {0, 1, 0, 0, 1},
            {1, 1, 0, 0, 1},
            {0, 1, 1, 1, 0}
    };
    hamCycle(graph);
    return 0;
}
