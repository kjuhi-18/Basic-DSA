
# 🧩 Adjacency List in C

> A beginner-friendly C program to represent a **Graph using an Adjacency List** — with features to add, delete, and display edges and vertices.

---

## 🚀 Overview

This project is part of the **Basic DSA** series and helps understand how **graphs** can be represented using **linked lists** in C.  
It’s an interactive, menu-driven program where you can:

✅ Insert Edges  
✅ Delete Nodes (and their connected edges)  
✅ View the Adjacency List Representation  

---

## 🧠 What is an Adjacency List?

An **Adjacency List** is a collection of linked lists where each list represents the nodes directly connected to a given vertex.

For example, for a graph like this:

```
0 — 1
|  /
2
```

The adjacency list would look like:

```
0 -> 1 -> 2 -> NULL
1 -> 0 -> 2 -> NULL
2 -> 0 -> 1 -> NULL
```

This structure is **memory-efficient** for sparse graphs and easy to modify dynamically.

---

## ⚙️ Features

✨ **Dynamic Memory Allocation** — No fixed size needed.  
🧩 **Add Edges** — Build your graph interactively.  
🗑️ **Delete Nodes/Edges** — Remove any vertex and its connections.  
👀 **Display Function** — View the graph’s adjacency list in a clear format.  
💬 **Menu-Driven Interface** — User-friendly and simple to explore.

---

## 🧰 Code Structure

| Function | Description |
|-----------|--------------|
| `createNode(int data)` | Creates and returns a new node for the adjacency list. |
| `insertEdge(struct Node* adj[], int src, int dest)` | Inserts an undirected edge between two vertices. |
| `deleteEdge(struct Node* adj[], int src, int dest)` | Removes the edge between `src` and `dest`. |
| `deleteNode(struct Node* adj[], int V, int vertex)` | Deletes a vertex and all edges connected to it. |
| `displayAdjList(struct Node* adj[], int V)` | Displays the adjacency list for each vertex. |

---

## 🧑‍💻 How to Run

### 1️⃣ Compile the Program
```bash
gcc adjacency\ list.c -o adjacency_list
```

### 2️⃣ Run the Executable
```bash
./adjacency_list
```

### 3️⃣ Follow the On-Screen Menu
```
--- Menu ---
1. Insert Edge
2. Delete Node
3. Display Adjacency List
4. Exit
```

Example interaction:
```
Enter the number of vertices in the graph: 4
1. Insert Edge
Enter source and destination vertices (src dest): 0 1
Edge from 0 to 1 inserted.
3. Display Adjacency List
0: -> 1 -> NULL
1: -> 0 -> NULL
```

---

## 📘 Concepts Covered

- Graph representation using **linked lists**
- **Dynamic memory allocation** with `malloc()`
- **Pointer manipulation**
- **Menu-driven programming**
- **Graph traversal structure understanding**

---

## 🧩 Directory Structure

```
Basic DSA/
└── Adjacency List/
    ├── adjacency list.c
    └── README.md
```

---

## 💡 Learning Takeaway

This mini project builds your foundation in:
- How real-world **networks** (like social graphs or road maps) are modeled in data structures  
- How to manage **connections dynamically**  
- The importance of **memory management and linked structures** in C  


