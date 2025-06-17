//. Implement Floyd’s algorithm for the All-Pairs-Shortest-Paths problem
#include <stdio.h>

#define INF 99999
#define V 4 // Number of vertices in the graph

// Function to print the solution matrix
void printSolution(int dist[][V]) {
    printf("Shortest distances between every pair of vertices:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                printf("INF\t");
            else
                printf("%d\t", dist[i][j]);
        }
        printf("\n");
    }
}

// Function to implement Floyd's algorithm for All-Pairs-Shortest-Paths
void floydWarshall(int graph[][V]) {
    int dist[V][V];
// Initialize the solution matrix with the input graph
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            dist[i][j] = graph[i][j];
// Update the solution matrix by considering all vertices asintermediate vertices
    for (int k = 0; k < V; k++) {
// Pick all vertices as source one by one
        for (int i = 0; i < V; i++) {
// Pick all vertices as destination for the above pickedsource
            for (int j = 0; j < V; j++) {
// If vertex k is on the shortest path from i to j,
// then update the value of dist[i][j]
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
// Print the solution matrix
    printSolution(dist);
}

// Driver program to test above function
int main() {
    int graph[V][V] = {{0,   5,   INF, 10},
                       {INF, 0,   3, INF},
                       {INF, INF, 0,   1},
                       {INF, INF, INF, 0}};
// Call the function to find all-pairs-shortest-paths
    floydWarshall(graph);
    return 0;
}
