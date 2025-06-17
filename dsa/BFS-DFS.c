//Print all the nodes reachable from a given starting node in a digraph using
//BFS method.Check whether a given graph is connected or not using DFS
//method.
#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the adjacency list
struct Node {
    int data;
    struct Node *next;
};
// Structure to represent the adjacency list for each vertex
struct AdjList {
    struct Node *head;
};
// Structure to represent the graph
struct Graph {
    int V;
    struct AdjList *array;
};

// Function prototypes
struct Node *createNode(int data);

struct Graph *createGraph(int V);

void addEdge(struct Graph *graph, int src, int dest);

void BFS(struct Graph *graph, int start);

void DFSUtil(struct Graph *graph, int vertex, int visited[]);

void DFS(struct Graph *graph);

int isConnected(struct Graph *graph);

int main() {
// Example graph representation
    int V = 5;
    struct Graph *graph = createGraph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
// Example of BFS: Print all nodes reachable from a given startingnode
    int startNode = 2;
    printf("Nodes reachable from %d using BFS:\n", startNode);
    BFS(graph, startNode);
// Example of DFS: Check whether the graph is connected
    int connected = isConnected(graph);
    if (connected)
        printf("The graph is connected.\n");
    else
        printf("The graph is not connected.\n");
    return 0;
}

// Function to create a new node
struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to create a graph with V vertices
struct Graph *createGraph(int V) {
    struct Graph *graph = (struct Graph *) malloc(sizeof(struct Graph));
    graph->V = V;
    graph->array = (struct AdjList *) malloc(V * sizeof(struct AdjList));
    for (int i = 0; i < V; ++i)
        graph->array[i].head = NULL;
    return graph;
}

// Function to add an edge to an undirected graph
void addEdge(struct Graph *graph, int src, int dest) {
    struct Node *newNode = createNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;
// For directed graph, you can comment the following lines to makeit undirected
    newNode = createNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

// Function to perform BFS starting from a given node
void BFS(struct Graph *graph, int start) {
    int *visited = (int *) malloc(graph->V * sizeof(int));
    for (int i = 0; i < graph->V; ++i)
        visited[i] = 0;
    struct Node *queue[graph->V];
    int front = 0, rear = 0;
    visited[start] = 1;
    printf("%d ", start);
    queue[rear++] = graph->array[start].head;
    while (front < rear) {
        struct Node *temp = queue[front];
        while (temp) {
            int adjNode = temp->data;
            if (!visited[adjNode]) {
                printf("%d ", adjNode);
                visited[adjNode] = 1;
                queue[rear++] = graph->array[adjNode].head;
            }
            temp = temp->next;
        }
        ++front;
    }
    free(visited);
}

// Function to perform DFS starting from a given node
void DFSUtil(struct Graph *graph, int vertex, int visited[]) {
    visited[vertex] = 1;
    printf("%d ", vertex);
    struct Node *temp = graph->array[vertex].head;
    while (temp) {
        int adjNode = temp->data;
        if (!visited[adjNode])
            DFSUtil(graph, adjNode, visited);
        temp = temp->next;
    }
}

void DFS(struct Graph *graph) {
    int *visited = (int *) malloc(graph->V * sizeof(int));
    for (int i = 0; i < graph->V; ++i)
        visited[i] = 0;
    for (int i = 0; i < graph->V; ++i) {
        if (!visited[i]) {
            printf("Connected Component: ");
            DFSUtil(graph, i, visited);
            printf("\n");
        }
    }
    free(visited);
}

// Function to check if the graph is connected using DFS
int isConnected(struct Graph *graph) {
    int *visited = (int *) malloc(graph->V * sizeof(int));
    for (int i = 0; i < graph->V; ++i)
        visited[i] = 0;
    DFSUtil(graph, 0, visited);
// Check if all vertices are visited
    for (int i = 0; i < graph->V; ++i) {
        if (!visited[i]) {
            free(visited);
            return 0; // Not connected
        }
    }
    free(visited);
    return 1; // Connected
}
