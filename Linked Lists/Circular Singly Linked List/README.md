# 🔁 Circular Singly Linked List in C

Welcome to the **Circular Singly Linked List** section of the **Basic DSA** project! 🚀  
This section explains how to create, manage, and understand the working of a **Circular Linked List** using the C programming language.

---

## 🧠 What is a Circular Singly Linked List?

A **Circular Singly Linked List (CSLL)** is a modified version of a normal singly linked list.  
In a CSLL, the **last node** points back to the **first node**, forming a **loop** instead of ending at NULL.

```
Head → [Data | Next] → [Data | Next] → [Data | Next] ┐
       ↑______________________________________________┘
```

This makes the list **circular**, allowing traversal from any point to reach back to the same node.

---

## 📂 Folder Structure

```
📁 Linked Lists
 └── 📁 Circular Singly Linked List
      ├── CircularSinglyLinkedList.c   # Full implementation in C
      └── README.md                    # Documentation (this file)
```

---

## ⚙️ Features of the Program

This program demonstrates **major operations** on a circular singly linked list using a **menu-driven approach**.

| Operation Type | Description |
|----------------|-------------|
| **Creation** | Dynamically create a circular linked list with n nodes. |
| **Display** | Traverse and print nodes in circular order. |
| **Insertion** | Insert a node at the **beginning**, **end**, or **specific position**. |
| **Deletion** | Delete a node from the **beginning**, **end**, or **specific position**. |
| **Reversal** | Reverse the entire circular linked list. |
| **Concatenation** | Merge two circular linked lists into one. |

---

## 🧩 How It Works

1. The program starts by creating a circular linked list of a user-defined size.  
2. Each node’s `next` pointer connects to the next node, and the **last node points back to the head**.  
3. A menu-driven interface allows inserting, deleting, or reversing nodes dynamically.  
4. The list is displayed after every operation, showing its circular behavior.

### 🖥️ Example Menu

```
MENU:
1. Insertion at beginning
2. Insertion at end
3. Insertion at a position
4. Deletion at beginning
5. Deletion at end
6. Deletion at a position
7. Reverse Circular Linked List
8. Concatenate two circular linked lists
0. Exit
```

---

## 🧱 Main Functions Explained

| Function | Purpose |
|-----------|----------|
| `createList(n)` | Creates a circular linked list with n nodes. |
| `displayList(head)` | Displays all elements and loops back to the head. |
| `insertAtBeginning()` | Inserts a node at the start and adjusts the last node pointer. |
| `insertAtEnd()` | Adds a node at the end and connects it to the head. |
| `insertAtPosition()` | Inserts a node at a specified position. |
| `deleteAtBeginning()` | Deletes the first node and reconnects the list. |
| `deleteAtEnd()` | Deletes the last node and updates its previous pointer. |
| `deleteAtPosition()` | Removes a node from a given position. |
| `reverseList()` | Reverses all node connections while maintaining circularity. |
| `concatenateLists()` | Joins two circular linked lists together. |

---

## 🧪 Sample Output

```
Enter number of nodes: 3
Enter data for node 1: 10
Enter data for node 2: 20
Enter data for node 3: 30

Circular Linked List: 10->20->30->(back to head)

MENU:
1. Insertion at beginning
...
Enter choice: 1
Enter data: 5
Circular Linked List: 5->10->20->30->(back to head)
```

---

## 💡 Step-by-Step Logic

### 1. **Node Structure**
Each node is represented as:
```c
struct Node {
    int data;
    struct Node* next;
};
```

### 2. **Circular Connection**
The last node links back to the first node:
```c
last->next = head;
```

### 3. **Traversal**
Since there’s no NULL pointer, traversal continues until we reach the head again:
```c
struct Node* temp = head;
do {
    printf("%d->", temp->data);
    temp = temp->next;
} while (temp != head);
printf("(back to head)");
```

### 4. **Insertion & Deletion**
All operations ensure that after modification, the **last node always points to the head**, maintaining circular structure.

### 5. **Reversal**
Reverses all links and reconnects the last node to the new head.

---

## 🧭 How to Compile and Run

1. Open terminal in this folder:
   ```bash
   cd "Linked Lists/Circular Singly Linked List"
   ```
2. Compile the program:
   ```bash
   gcc CircularSinglyLinkedList.c -o circularlist
   ```
3. Run the program:
   ```bash
   ./circularlist
   ```

---

## 📘 Concepts You Will Learn

- Understanding circular memory linking  
- Using `do-while` loops for circular traversal  
- Dynamic memory management with `malloc()` and `free()`  
- Maintaining connections while inserting/deleting nodes  
- Reversing circular structures correctly  

---

## 🧠 Beginner Tips

✅ Draw a diagram to visualize the loop before coding.  
✅ Always update the **last node’s next pointer** after every operation.  
✅ Use small lists (3–4 nodes) to see circular movement easily.  
✅ Try extending this logic to **Circular Doubly Linked Lists** once comfortable.  

---

## 🎯 Learning Outcome

By completing this section, you will:
- Understand how circular linked lists differ from normal ones.  
- Learn to handle memory dynamically with looped pointers.  
- Gain confidence to build more complex linked structures.  

---

⭐ *Keep the loop going — every cycle brings you closer to mastering DSA!*  
