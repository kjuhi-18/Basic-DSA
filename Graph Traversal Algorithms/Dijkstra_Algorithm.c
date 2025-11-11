#include <stdio.h>
#include <stdbool.h>

#define MAX 10
#define INF 9999

void dijkstra(int graph[MAX][MAX], int n, int start) {
    int distance[MAX], visited[MAX];
    int i, count, v, nextNode, minDistance;

    // Part-1: Initialization
    for (i = 0; i < n; i++) {
        distance[i] = INF;
        visited[i] = false;
    }
    distance[start] = 0;

    // Part-2: Dijkstra’s Algorithm
    for (count = 0; count < n - 1; count++) {
        minDistance = INF;
        for (v = 0; v < n; v++) {
            if (!visited[v] && distance[v] < minDistance) {
                minDistance = distance[v];
                nextNode = v;
            }
        }

        visited[nextNode] = true;

        for (v = 0; v < n; v++) {
            if (!visited[v] && graph[nextNode][v] != INF && 
                distance[nextNode] + graph[nextNode][v] < distance[v]) {
                distance[v] = distance[nextNode] + graph[nextNode][v];
            }
        }
    }

    // Part-3: Display Results
    printf("\nVertex\tDistance from Source\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%d\n", i, distance[i]);
    }
}

int main() {
    int graph[MAX][MAX], n, i, j, start, edges, src, dest, weight;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    // Initialize graph
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            graph[i][j] = INF;
        }
    }

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    // Input edges and weights
    for (i = 0; i < edges; i++) {
        printf("Enter edge (src dest weight): ");
        scanf("%d %d %d", &src, &dest, &weight);
        graph[src][dest] = weight;
        graph[dest][src] = weight; // For undirected graphs
    }

    printf("Enter the starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    dijkstra(graph, n, start);

    return 0;
}
