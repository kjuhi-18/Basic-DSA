#include <stdio.h>
#include <stdlib.h>

#define MAX 100  // Maximum number of vertices the graph can have

// Queue for BFS
int queue[MAX], f = -1,r = -1;

// Array to keep track of visited vertices
int visited[MAX];

// Adjacency matrix to represent the graph
int graph[MAX][MAX];

// Number of vertices (global variable so all functions can use it)
int n;

// Function to add a vertex to the queue
void enqueue(int vertex)
{
    if (r == MAX - 1) { // Queue is full
        printf("Queue is full\n");
    } else {
        if (f == -1) f = 0; // If queue was empty, set f to 0
       r++;
        queue[r] = vertex; // Add vertex to ther of the queue
    }
}

// Function to remove a vertex from the queue
int dequeue()
{
    int vertex;

    if (f == -1) { // Queue is empty
        printf("Queue is empty\n");
        return -1;
    } else {
        vertex = queue[f]; // Get the f element
        f++;

        // If queue becomes empty after removing, reset f andr
        if (f >r) f =r = -1;
    }
    return vertex; // Return the removed vertex
}

// Function to perform BFS starting from a given vertex
void bfs(int start)
{
    enqueue(start);       // Add starting vertex to queue
    visited[start] = 1;   // Mark starting vertex as visited

    while (f != -1) { // While queue is not empty
        int current = dequeue();  // Remove vertex from queue
        printf("%d ", current);   // Print the vertex

        // Check all vertices connected to current vertex
        for (int i = 0; i < n; i++) {
            // If vertex i is connected and not visited
            if (graph[current][i] == 1 && !visited[i]) {
                enqueue(i);       // Add it to the queue
                visited[i] = 1;   // Mark it as visited
            }
        }
    }
    printf("\n");
}

int main()
{
    int edges, src, dest;

    // Ask user for number of vertices
    printf("Enter number of vertices - ");
    scanf("%d", &n);

    // Initialize adjacency matrix and visited array to 0
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        for (int j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
    }

    // Ask user for number of edges
    printf("Enter number of edges - ");
    scanf("%d", &edges);

    // Take input for each edge
    for (int i = 0; i < edges; i++) {
        printf("Enter edge (src dest) - ");
        scanf("%d %d", &src, &dest);

        // Check if input is valid
        if (src >= 0 && src < n && dest >= 0 && dest < n) {
            // For undirected graph, mark both [src][dest] and [dest][src]
            graph[src][dest] = graph[dest][src] = 1;
        } else {
            printf("Invalid edge! Try again.\n");
            i--;  // Retry this iteration
        }
    }

    // Perform BFS starting from vertex 0
    printf("BFS starting from vertex 0:\n");
    bfs(0);

    return 0;
}
