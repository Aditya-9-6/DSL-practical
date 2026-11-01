# Practical No. 7(D): Graph Traversal (DFS and BFS)

## Problem Statement
Consider a particular area in your city. Note the popular locations $A, B, C, \dots$ in that area. Assume these locations represent nodes of a graph. If there is a route between two locations, it is represented as connections between nodes.

Find out the sequence in which you will visit these locations, starting from (say $A$) using:
1. **Depth First Search (DFS)**
2. **Breadth First Search (BFS)**

---

## C Source Code
File: [`graph_dfs_bfs.c`](graph_dfs_bfs.c)

```c
#include <stdio.h>

#define N 6

// DFS using Adjacency Matrix
void DFS(int graph[N][N], int visited[], int v)
{
    int i;
    printf("%c ", v + 'A');
    visited[v] = 1;

    for (i = 0; i < N; i++)
    {
        if (graph[v][i] == 1 && visited[i] == 0)
        {
            DFS(graph, visited, i);
        }
    }
}

// BFS using Adjacency Matrix
void BFS(int adj[N][N], int start)
{
    int queue[N], visited[N] = {0};
    int front = 0, rear = 0;
    int i, v;

    queue[rear++] = start;
    visited[start] = 1;

    while (front < rear)
    {
        v = queue[front++];
        printf("%c ", v + 'A');

        for (i = 0; i < N; i++)
        {
            if (adj[v][i] == 1 && visited[i] == 0)
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    int graph[N][N] = {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 1, 0},
        {1, 0, 0, 0, 0, 1},
        {0, 1, 0, 0, 1, 0},
        {0, 1, 0, 1, 0, 1},
        {0, 0, 1, 0, 1, 0}
    };
    int visited[N] = {0};

    printf("DFS Traversal: ");
    DFS(graph, visited, 0);

    printf("\nBFS Traversal: ");
    BFS(graph, 0);
    printf("\n");

    return 0;
}
```

---

## How to Compile & Run

```bash
gcc graph_dfs_bfs.c -o graph_traversal
./graph_traversal
```

---

## Expected Output

```text
DFS Traversal: A B D E F C 
BFS Traversal: A B C D E F 
```

---

## Graph Representation

Nodes represent locations:
- `0` $\rightarrow$ `A`
- `1` $\rightarrow$ `B`
- `2` $\rightarrow$ `C`
- `3` $\rightarrow$ `D`
- `4` $\rightarrow$ `E`
- `5` $\rightarrow$ `F`

Connections:
- $A \leftrightarrow B, C$
- $B \leftrightarrow A, D, E$
- $C \leftrightarrow A, F$
- $D \leftrightarrow B, E$
- $E \leftrightarrow B, D, F$
- $F \leftrightarrow C, E$

---

## Complexity Analysis

| Algorithm | Representation | Time Complexity | Auxiliary Space |
|---|---|---|---|
| **DFS** | Adjacency Matrix | $O(V^2)$ | $O(V)$ (recursion stack + visited array) |
| **BFS** | Adjacency Matrix | $O(V^2)$ | $O(V)$ (queue + visited array) |
