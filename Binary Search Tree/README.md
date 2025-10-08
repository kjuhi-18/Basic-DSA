# 🌳 Binary Search Tree (BST) in C

Welcome to the **Binary Search Tree Project!** 🌱  
This beginner-friendly program demonstrates how a **Binary Search Tree (BST)** works — including **node insertion**, **searching**, and **tree traversals** — implemented completely in **C**.  

---

## 🧠 What is a Binary Search Tree?

A **Binary Search Tree (BST)** is a hierarchical data structure where each node follows these simple rules:
- The **left child** contains a value **smaller** than its parent.  
- The **right child** contains a value **greater** than its parent.  
- No duplicate values are allowed.  

This ensures efficient **search**, **insert**, and **traversal** operations — often used in databases, searching, and sorting algorithms.  

---

## ✨ Features

🎯 Create and build a BST dynamically from user input  
🌿 Insert multiple nodes interactively  
🔍 Search for a specific value in the tree  
🪄 Display the BST in a **tree-like format** using arrows  
🔁 Perform **Inorder**, **Preorder**, and **Postorder** traversals  
💡 Menu-driven design for smooth user experience  

---

## 🗂 Folder Structure

```
Binary Search Tree/
│
├── BST.c        # Main C source code
└── README.md    # Project documentation (you are here!)
```

---

## ⚙️ How to Run the Program

### 🔹 Step 1: Compile the program
```bash
gcc BST.c -o bst
```

### 🔹 Step 2: Run the executable
```bash
./bst
```

---

## 🧍‍♂️ Example Run

```
Enter number of nodes: 5
Enter values of nodes:
50 30 70 20 40
BST Created Successfully!

--> 70
      --> 50
--> 40
      --> 30
--> 20

--- BST Menu ---
1. Inorder Traversal
2. Preorder Traversal
3. Postorder Traversal
4. Search a Node
5. Exit
```

---

## 🌳 Traversal Results

| Traversal Type | Order | Output Example |
|----------------|-------|----------------|
| **Inorder** | Left → Root → Right | `20 30 40 50 70` |
| **Preorder** | Root → Left → Right | `50 30 20 40 70` |
| **Postorder** | Left → Right → Root | `20 40 30 70 50` |

---

## 🔎 Searching Example

```
Enter value to search: 30
Value 30 found in BST!
```

If not found:
```
Enter value to search: 10
Value 10 NOT found in BST!
```

---

## 🧩 Core Functions Overview

| Function | Description |
|-----------|--------------|
| `createnode(int data)` | Creates and returns a new BST node |
| `insert(struct Node *root, int data)` | Inserts a node while maintaining BST rules |
| `inorder(struct Node *root)` | Displays elements in sorted order |
| `preorder(struct Node *root)` | Displays nodes in root-first order |
| `postorder(struct Node *root)` | Displays nodes in root-last order |
| `search(struct Node *root, int key)` | Finds a specific key in the BST |
| `printBST(struct Node *root, int space)` | Visually prints the BST structure |

---

## 📚 Learning Outcomes

- 🌱 Understand the working principles of a Binary Search Tree  
- 🔁 Learn recursive traversal methods  
- 💾 Practice dynamic memory allocation using `malloc()`  
- 🧭 Build a clean, interactive menu-driven program in C  

---

## 💡 Possible Enhancements

✨ Add **deletion operation** for nodes  
✨ Include **height calculation** of the BST  
✨ Save or load BST data from a file  
✨ Convert to a **C++ object-oriented version**  

---

## 👨‍💻 Author Notes

> “Coding a Binary Search Tree helps you truly understand how data structures organize, store, and retrieve information efficiently.”

Keep experimenting and building! 🚀  
Happy Coding! 💚

---

