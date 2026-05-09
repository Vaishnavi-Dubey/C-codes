//From a given vertex in a weighted connected graph, find shortest paths to
//other vertices negative weights (using Bellman-Ford algorithm).
#include <stdio.h>
#include <limits.h>

#define V 5 // Number of vertices in the graph
#define E 8 // Number of edges in the graph
// Structure to represent an edge in the graph
struct Edge {
    int src, dest, weight;
};

// Function to print the constructed distance array
void printSolution(int dist[]) {
    printf("Vertex \t Distance from Source\n");
    for (int i = 0; i < V; i++)
        printf("%d \t %d\n", i, dist[i]);
}

// Function to implement the Bellman-Ford algorithm for a given graph
void bellmanFord(struct Edge edges[], int src) {
    int dist[V];
// Step 1: Initialize distances from the source to all vertices asINFINITE
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX;
// Distance from the source to itself is always 0
    dist[src] = 0;
// Step 2: Relax all edges |V| - 1 times
    for (int i = 1; i <= V - 1; i++) {
        for (int j = 0; j < E; j++) {
            int u = edges[j].src;
            int v = edges[j].dest;
            int weight = edges[j].weight;
            if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
                dist[v] = dist[u] + weight;
        }
    }
// Step 3: Check for negative-weight cycles
    for (int i = 0; i < E; i++) {
        int u = edges[i].src;
        int v = edges[i].dest;
        int weight = edges[i].weight;
        if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
            printf("Graph contains negative weight cycle. Bellman-Forddoesn't work for graphs with negative cycles.\n");
            return;
        }
    }
// Print the constructed distance array
    printSolution(dist);
}

// Driver program to test above function
int main() {
// Example graph representation with negative weights
    struct Edge edges[] = {
            {0, 1, 4},
            {0, 2, 2},
            {1, 3, 5},
            {1, 4, 10},
            {2, 1, -3},
            {2, 3, 2},
            {2, 4, 3},
            {4, 3, 4}
    };
    int source = 0; // Source vertex
// Print the shortest paths
    printf("Shortest Paths from Source Vertex %d using Bellman-FordAlgorithm:\n", source);
    bellmanFord(edges, source);
    return 0;
}