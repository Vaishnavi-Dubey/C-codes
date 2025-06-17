// From a given vertex in a weighted connected graph, find shortest paths to
//other vertices using Dijkstra's algorithm.
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define V 6 // Number of vertices in the graph

// Function to find the vertex with the minimum distance value
int minDistance(int dist[], int sptSet[]) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++) {
        if (sptSet[v] == 0 && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

// Function to print the constructed distance array
void printSolution(int dist[]) {
    printf("Vertex \t Distance from Source\n");
    for (int i = 0; i < V; i++)
        printf("%d \t %d\n", i, dist[i]);
}

// Function to implement Dijkstra's algorithm for a given graph
void dijkstra(int graph[V][V], int src) {
    int dist[V]; // The output array dist[i] holds the shortestdistancefromsrcto i
    int sptSet[V]; // sptSet[i] is true if vertex i is included in theshortestpathtreeortheshortestdistancefromsrctoiis finalized
// Initialize all distances as INFINITE and sptSet[] as false
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = 0;
    }
// Distance of source vertex from itself is always 0
    dist[src] = 0;
// Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++) {
// Pick the minimum distance vertex from the set of verticesnotyetprocessed.
// u is always equal to src in the first iteration.
        int u = minDistance(dist, sptSet);
// Mark the picked vertex as processed
        sptSet[u] = 1;
// Update dist value of the adjacent vertices of the pickedvertex.
        for (int v = 0; v < V; v++) {
// Update dist[v] only if it is not in the sptSet, there isanedgefromuto v,
// and the total weight of path from src to v through u issmallerthanthecurrentvalueof dist[v]
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
        }
    }
// Print the constructed distance array
    printSolution(dist);
}

// Driver program to test above function
int main() {
// Example graph representation
    int graph[V][V] = {{0, 2, 0, 0, 0, 0},
                       {2, 0, 4, 1, 0, 0},
                       {0, 4, 0, 7, 0, 0},
                       {0, 1, 7, 0, 3, 0},
                       {0, 0, 0, 3, 0, 1},
                       {0, 0, 0, 0, 1, 0}};
    int source = 0; // Source vertex
// Print the shortest paths
    printf("Shortest Paths from Source Vertex %d using Dijkstra'sAlgorithm:\n", source);
    dijkstra(graph, source);
    return 0;
}
