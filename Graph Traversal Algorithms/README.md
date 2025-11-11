
# 🌐 Graph Traversal & Shortest Path Algorithms in C

> 📘 A collection of essential graph algorithms implemented in C — made simple and beginner-friendly.  
> These programs help visualize how we **explore** and **optimize** connections in a network using different traversal strategies.

---

## 🚀 Overview

Graphs represent networks — such as **cities connected by roads**, **friends on social media**, or **links between web pages**.  
To work with these networks, we use **graph traversal algorithms** to explore or find the best routes between nodes.

This directory contains:

| Algorithm | Folder | Description |
|------------|---------|-------------|
| 🧭 **BFS (Breadth-First Search)** | `BFS/` | Explores the graph level by level — ideal for shortest paths in unweighted graphs. |
| 🕳️ **DFS (Depth-First Search)** | `DFS/` | Explores each branch as deep as possible before backtracking. |
| 🛣️ **Dijkstra’s Algorithm** | `Dijkstra/` | Finds the shortest path in weighted graphs — used in maps and GPS systems. |

---

## 📁 Folder Structure

```
Basic DSA/
└── Graph Traversal Algorithms/
    ├── BFS/
    │   └── BFS.c
    ├── DFS/
    │   └── DFS.c
    ├── Dijkstra/
    │   └── Dijkstra_Algorithm.c
    └── README.md
```

---

## 🧩 1. Breadth-First Search (BFS)

### 📘 Concept
BFS explores **all neighbours first**, then their neighbours, layer by layer — just like waves spreading in water 🌊.

### 🧠 Real-Life Example
Think of a **social network**:  
You → Your friends → Friends of friends → and so on.  
That’s BFS — visiting all users at one "distance" before moving deeper.

### 🔹 Example Graph
```
     0
    / \
   1   2
   |   |
   3   4
```

### 🧮 Expected Traversal
Starting from vertex 0:  
**0 → 1 → 2 → 3 → 4**

### 💻 Run Example
```bash
cd "Graph Traversal Algorithms/BFS"
gcc BFS.c -o bfs
./bfs
```

---

## 🧩 2. Depth-First Search (DFS)

### 📘 Concept
DFS explores **one path as deep as possible**, then backtracks to explore other paths — like walking through a maze 🧭.

### 🧠 Real-Life Example
Imagine exploring a cave system:  
You keep going deeper until you hit a wall, then backtrack to try another tunnel.

### 🔹 Example Graph
```
     0
    / \
   1   2
  /     \
 3       4
```

### 🧮 Expected Traversal
Starting from vertex 0:  
**0 → 1 → 3 → 2 → 4**

### 💻 Run Example
```bash
cd "Graph Traversal Algorithms/DFS"
gcc DFS.c -o dfs
./dfs
```

---

## 🧩 3. Dijkstra’s Shortest Path Algorithm

### 📘 Concept
Dijkstra’s algorithm finds the **shortest path** from one vertex to all others in a **weighted graph** using a **greedy approach**.

### 🧠 Real-Life Example
Used in **Google Maps or GPS** — it finds the quickest route between cities by considering the weights (distances or time).

### 🔹 Example Graph (Weighted)
```
     (4)
  0 ------- 1
   \       /
   (2)   (5)
     \   /
       2
```

Here:
- Edge 0–1 = 4  
- Edge 0–2 = 2  
- Edge 1–2 = 5  

### 🧮 Expected Output
Starting from vertex 0:
```
Vertex   Distance
0        0
1        4
2        2
```

### 💻 Run Example
```bash
cd "Graph Traversal Algorithms/Dijkstra"
gcc Dijkstra_Algorithm.c -o dijkstra
./dijkstra
```

---

## 📘 Key Concepts Covered

- Graph representation using **Adjacency Matrix**  
- Use of **Queue (BFS)** and **Stack (DFS)**  
- **Greedy Algorithm (Dijkstra)** for shortest path  
- Traversal, backtracking, and optimal route finding  
- Understanding **connectedness** and **reachability** in networks  

---

## 📊 Comparison Summary

| Algorithm | Traversal Type | Data Structure | Graph Type | Key Use |
|------------|----------------|----------------|-------------|----------|
| **BFS** | Level-wise | Queue | Unweighted | Shortest path, level order |
| **DFS** | Depth-wise | Stack | Unweighted | Connectivity, cycle detection |
| **Dijkstra** | Greedy shortest path | Array / Min-Heap | Weighted | Shortest route in weighted graph |

---

## 📝 Note

These algorithms form the **foundation of all advanced graph concepts** in Data Structures & Algorithms.  
From **social network recommendations**, **Google Maps routing**, **web crawling**, to **AI pathfinding in games** —  
it all starts here.

> 🌟 **Learn these three well**, and every advanced graph algorithm will make perfect sense.

