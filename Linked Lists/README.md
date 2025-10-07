
# 🔗 Linked Lists – Basic DSA 🧠

Welcome to the **Linked Lists** section of the **Basic DSA** repository! 🚀  
This folder is your complete guide to one of the most fundamental data structures in programming — **Linked Lists**.  
Here, you’ll explore different types of linked lists, understand how they work under the hood, and learn how to implement them in **C** with clean, beginner-friendly code.

---

## 📁 Folder Overview

Here’s what you’ll find inside this directory:

| 📂 Folder | 📌 Description |
|----------|----------------|
| **Singly Linked List** | A simple one-way chain where each node points to the next. Great for beginners! |
| **Doubly Linked List** | A two-way linked structure enabling traversal in both directions. |
| **Circular Singly Linked List** | A looped version where the last node points back to the head. Perfect for circular data structures. |

---

## 🧠 What Is a Linked List?

A **Linked List** is a linear data structure made of nodes, where **each node contains data and a pointer** to the next (and sometimes previous) node.

Unlike arrays, linked lists **don’t need contiguous memory**, making them flexible and memory-efficient.

### 📦 Node Structure
```c
struct Node {
    int data;            // data part
    struct Node* next;   // pointer to next node
};
```

---

## 🧬 Types of Linked Lists in This Repo

### 1. ➡️ Singly Linked List
- Each node points **only to the next**.
- Best for basic operations like insertion, deletion, and traversal.

📁 File: `SinglyLinkedList.c`

```
[HEAD] → [10] → [20] → [30] → NULL
```

---

### 2. ↔️ Doubly Linked List
- Nodes have **two pointers**: one to the next and one to the previous node.
- Enables **bidirectional traversal** and easier insertion/deletion in the middle.

📁 File: `DoublyLinkedList.c`

```
NULL ← [10] ⇄ [20] ⇄ [30] → NULL
```

---

### 3. 🔁 Circular Singly Linked List
- The **last node connects back to the head**, forming a continuous loop.
- Useful for scenarios like task scheduling and round-robin algorithms.

📁 File: `SinglyCircularLinkedList.c`

```
[HEAD] → [10] → [20] → [30]
   ↑                     ↓
   └─────────────────────┘
```

---

## ⚙️ Core Operations Implemented

✨ **Insertion** – at beginning, end, or specific position  
🗑️ **Deletion** – by value, position, or at ends  
🔎 **Search** – find elements efficiently  
🔁 **Traversal** – iterate through nodes  
🔄 **Reverse / Loop Handling** *(advanced operations)*  

---

## 💡 Why Learn Linked Lists?

✅ Strengthens your understanding of **pointers and memory management**  
✅ Builds the foundation for **stacks, queues, graphs, and hash tables**  
✅ Essential for mastering **data structures & algorithms**  

---

## 🛠️ How to Use This Folder

1. 📥 Choose a linked list type folder.  
2. 📜 Read its mini-`README.md` for explanations and operations.  
3. 💻 Open the corresponding `.c` file to study or run the implementation.  
4. 🧪 Experiment by adding new operations or modifying existing ones.

---

## 🧪 Pro Tips for Beginners

💡 Always check for `NULL` before dereferencing pointers.  
💡 Draw node diagrams to visualize how links change during insertion or deletion.  
💡 Start with **singly linked lists**, then move to **doubly** and **circular** once comfortable.

---

## 🎯 Final Words

Linked Lists are more than just a data structure — they’re your **gateway to mastering dynamic memory, pointers, and algorithmic thinking**.  
This section gives you everything you need to understand them deeply and implement them confidently. 🌱

> 🚀 Ready to begin? Dive into each folder, explore the code, and start building your linked list skills today!

---

✨ *Happy Coding!* ✨  
📚 *– The Basic DSA Project Team*

