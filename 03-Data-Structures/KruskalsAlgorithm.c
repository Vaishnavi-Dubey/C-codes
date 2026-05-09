//Find Minimum Cost Spanning Tree of a given undirected graph using
//Kruskal’s algorithm .
#include <stdio.h>
#include <stdlib.h>

// Structure to represent an edge in the graph
struct Edge {
    int src, dest, weight;
};
// Structure to represent a subset for union-find
struct Subset {
    int parent;
    int rank;
};

// Function prototypes
int find(struct Subset subsets[], int i);

void unionSets(struct Subset subsets[], int x, int y);

int compareEdges(const void *a, const void *b);

void kruskalMST(struct Edge edges[], int V, int E);

int main() {
// Example graph representation
    int V = 4; // Number of vertices
    int E = 5; // Number of edges
    struct Edge edges[] = {
            {0, 1, 10},
            {0, 2, 6},
            {0, 3, 5},
            {1, 3, 15},
            {2, 3, 4}
    };
// Find the minimum spanning tree
    kruskalMST(edges, V, E);
    return 0;
}

// Find set of an element i
int find(struct Subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

// Union of two sets
void unionSets(struct Subset subsets[], int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

// Comparison function for qsort
int compareEdges(const void *a, const void *b) {
    return ((struct Edge *) a)->weight - ((struct Edge *) b)->weight;
}

// Kruskal's algorithm to find Minimum Cost Spanning Tree
void kruskalMST(struct Edge edges[], int V, int E) {
    struct Edge result[V - 1]; // To store the resultant MST
    int e = 0; // Index variable for the result[]
    int i = 0; // Index variable for sorted edges array
// Step 1: Sort all the edges in non-decreasing order of theirweight
    qsort(edges, E, sizeof(edges[0]), compareEdges);
// Allocate memory for creating V subsets
    struct Subset *subsets = (struct Subset *) malloc(V * sizeof(struct
            Subset));
// Create V subsets with single elements
    for (int v = 0; v < V; ++v) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }
// Number of edges to be taken is equal to V-1
    while (e < V - 1 && i < E) {
// Step 2: Pick the smallest edge. Increment the index for thenext iteration
        struct Edge next_edge = edges[i++];
        int x = find(subsets, next_edge.src);
        int y = find(subsets, next_edge.dest);
// Step 3: If including this edge does not cause a cycle,include it in the result and increment the index of result for the nextedge
        if (x != y) {
            result[e++] = next_edge;
            unionSets(subsets, x, y);
        }
    }
// Print the result
    printf("Edges in the Minimum Cost Spanning Tree:\n");
    for (i = 0; i < e; ++i)
        printf("%d -- %d weight %d\n", result[i].src, result[i].dest,
               result[i].weight);
    free(subsets);
}