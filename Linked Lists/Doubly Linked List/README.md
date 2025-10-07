# 🔗 Doubly Linked List in C

Welcome to the **Doubly Linked List** section of the **Basic DSA** project! 🚀  
This part focuses on one of the most powerful and flexible data structures — the **Doubly Linked List**, implemented in the C programming language.

---

## 🧠 What is a Doubly Linked List?

A **Doubly Linked List (DLL)** is a collection of nodes where each node contains:
1. **Data** – The value stored in the node.  
2. **Previous Pointer (`prev`)** – Points to the previous node.  
3. **Next Pointer (`next`)** – Points to the next node.  

This allows **two-way traversal** — from head to tail and tail to head — unlike a singly linked list.

```
NULL ← [Prev | Data | Next] ↔ [Prev | Data | Next] ↔ [Prev | Data | NULL]
```

---

## 📂 Folder Structure

```
📁 Linked Lists
 └── 📁 Doubly Linked List
      ├── DoublyLinkedList.c   # Complete implementation of doubly linked list
      └── README.md             # Documentation (this file)
```

---

## ⚙️ Features of the Program

This program demonstrates **major operations** on a doubly linked list using a **menu-driven interface**.  

| Operation Type | Description |
|----------------|-------------|
| **Creation** | Create a doubly linked list by dynamically adding nodes. |
| **Display** | Traverse and print elements **forward** or **backward**. |
| **Insertion** | Insert nodes at the **beginning**, **end**, or **specific position**. |
| **Deletion** | Delete nodes from the **beginning**, **end**, or **specific position**. |
| **Reversal** | Reverse the entire doubly linked list. |
| **Concatenation** | Merge two doubly linked lists. |

---

## 🧩 How It Works

1. The program starts by creating a list with a specified number of nodes.  
2. Each node contains data and two pointers (`prev`, `next`).  
3. A menu allows the user to perform insertion, deletion, or reversal operations.  
4. After each operation, the list is displayed in its updated form.

### 🖥️ Example Menu

```
MENU:
1. Insertion at beginning
2. Insertion at end
3. Insertion at a position
4. Deletion at beginning
5. Deletion at end
6. Deletion at a position
7. Reverse the doubly linked list
8. Concatenate two doubly linked lists
0. Exit
```

---

## 🧱 Main Functions Explained

| Function | Purpose |
|-----------|----------|
| `createList(n)` | Creates a doubly linked list with `n` nodes. |
| `displayList(head)` | Displays all nodes from head to tail. |
| `displayReverse(tail)` | Displays nodes from tail to head. |
| `insertAtBeginning()` | Inserts a new node at the beginning. |
| `insertAtEnd()` | Inserts a node at the end. |
| `insertAtPosition()` | Inserts a node at a specific position. |
| `deleteAtBeginning()` | Deletes the first node. |
| `deleteAtEnd()` | Deletes the last node. |
| `deleteAtPosition()` | Deletes a node at a given position. |
| `reverseList()` | Reverses the doubly linked list. |
| `concatenateLists()` | Joins two doubly linked lists. |

---

## 🧪 Sample Output

```
Enter the number of nodes: 3
Enter data for node 1: 10
Enter data for node 2: 20
Enter data for node 3: 30

Forward: 10 <-> 20 <-> 30 <-> NULL

MENU:
1. Insertion at beginning
...
Enter your choice: 1
Enter data: 5
Forward: 5 <-> 10 <-> 20 <-> 30 <-> NULL
```

---

## 💡 Step-by-Step Logic

### 1. **Node Structure**
Each node is created using:
```c
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
```

### 2. **Linking Nodes**
Each node connects in both directions:
```c
newNode->prev = temp;
temp->next = newNode;
```

### 3. **Displaying Forward**
Traversal starts from `head` until `NULL`:
```c
while (temp != NULL) {
    printf("%d <-> ", temp->data);
    temp = temp->next;
}
```

### 4. **Displaying Backward**
Traversal starts from `tail` backward:
```c
while (temp != NULL) {
    printf("%d <-> ", temp->data);
    temp = temp->prev;
}
```

### 5. **Reversal**
Swap the `next` and `prev` pointers of all nodes.

### 6. **Concatenation**
Connect the tail of the first list to the head of the second.

---

## 🧭 How to Compile and Run

1. Open terminal in this folder:
   ```bash
   cd "Linked Lists/Doubly Linked List"
   ```
2. Compile the program:
   ```bash
   gcc DoublyLinkedList.c -o doublylinkedlist
   ```
3. Run the program:
   ```bash
   ./doublylinkedlist
   ```

---

## 📘 Concepts You Will Learn

- Structures with multiple pointers (`prev`, `next`)  
- Bidirectional traversal logic  
- Dynamic memory management using `malloc()` and `free()`  
- Insertion and deletion in both directions  
- Understanding the difference between singly and doubly linked lists  

---

## 🧠 Beginner Tips

✅ Trace every pointer movement on paper before running the code.  
✅ Test insertion and deletion in the **middle** carefully.  
✅ Use print statements to verify `prev` and `next` links.  
✅ Once you master DLL, you’re ready for **Circular Doubly Linked Lists**!  

---

## 🎯 Learning Outcome

After completing this program, you will:
- Understand how doubly linked lists store data bidirectionally.  
- Be able to insert, delete, and traverse nodes efficiently.  
- Build a strong foundation for advanced linked list types and real-world applications.  

---

⭐ *Every node you link brings you one step closer to mastering DSA!*  
