# 🔗 Singly Linked List in C

Welcome to the **Singly Linked List** section of the **Basic DSA** project! 🚀  
This section introduces you to one of the most fundamental data structures — the **Linked List** — implemented in the C programming language.

---

## 🧠 What is a Singly Linked List?

A **Singly Linked List** is a chain of nodes where each node contains two parts:
1. **Data** – The value stored in the node.
2. **Pointer (Next)** – The address of the next node in the list.

The last node points to **NULL**, indicating the end of the list.

```
Head → [Data | Next] → [Data | Next] → [Data | NULL]
```

Unlike arrays, linked lists do **not** require contiguous memory, making them **dynamic** and **flexible** for insertion and deletion operations.

---

## 📂 Folder Structure

```
📁 Linked Lists
 └── 📁 Singly Linked List
      ├── SinglyLinkedList.c   # Complete implementation of singly linked list
      └── README.md             # Documentation (this file)
```

---

## ⚙️ Features of the Program

This program demonstrates **major operations** on a singly linked list using a **menu-driven approach**.  

| Operation Type | Description |
|----------------|--------------|
| **Creation** | Create a linked list by adding nodes dynamically. |
| **Display** | Print the elements of the linked list in order. |
| **Insertion** | Insert a node at the **beginning**, **end**, or **specific position**. |
| **Deletion** | Delete a node from the **beginning**, **end**, or **specific position**. |
| **Reversal** | Reverse the entire linked list. |
| **Concatenation** | Merge two linked lists into one. |

---

## 🧩 How It Works

1. The program starts by asking the user how many nodes to create.  
2. Each node is dynamically allocated memory using `malloc()`.
3. A menu is displayed to perform operations such as insertion, deletion, or reversal.
4. After each operation, the linked list is displayed to show the current state.

### 🖥️ Example Menu

```
MENU:
1. Insertion at beginning
2. Insertion at end
3. Insertion at a position
4. Deletion at beginning
5. Deletion at end
6. Deletion at a position
7. Reverse of Linked List
8. Concatenation of 2 linked lists
0. Exit
```

---

## 🧱 Main Functions Explained

| Function | Purpose |
|-----------|----------|
| `createList(n)` | Creates a linked list with `n` nodes. |
| `displayList(head)` | Prints all the nodes in the list. |
| `insertatfirst()` | Inserts a new node at the beginning. |
| `insertatend()` | Inserts a new node at the end. |
| `insertatbetween()` | Inserts a node at a specific position. |
| `deleteatfirst()` | Deletes the first node. |
| `deleteatend()` | Deletes the last node. |
| `deleteatposition()` | Deletes a node at a given position. |
| `reversel()` | Reverses the linked list. |
| `concatel()` | Combines two linked lists. |

---

## 🧪 Sample Output

```
Enter the number of nodes: 3
Enter data for node 1: 10
Enter data for node 2: 20
Enter data for node 3: 30

The linked list is: 10->20->30->NULL

MENU:
1. Insertion at beginning
...
Enter your choice: 1
Enter data: 5
The linked list is: 5->10->20->30->NULL
```

---

## 💡 Step-by-Step Logic

### 1. **Node Creation**
Each node is dynamically created using:
```c
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
```
This ensures memory is allocated at runtime.

### 2. **Linking Nodes**
Each new node’s `next` pointer is connected to form a chain:
```c
temp->next = newNode;
```

### 3. **Displaying the List**
The program traverses from `head` till `NULL`:
```c
while (temp != NULL) {
    printf("%d->", temp->data);
    temp = temp->next;
}
```

### 4. **Reversing the List**
Reversal changes each node’s `next` pointer to its previous node.

```
Before Reversal: 10 -> 20 -> 30 -> NULL
After Reversal: 30 -> 20 -> 10 -> NULL
```

### 5. **Concatenation**
Two linked lists are connected by linking the last node of the first list to the head of the second.

---

## 🧭 How to Compile and Run

1. Open terminal in this folder:
   ```bash
   cd "Linked Lists/Singly Linked List"
   ```
2. Compile the program:
   ```bash
   gcc SinglyLinkedList.c -o linkedlist
   ```
3. Run the program:
   ```bash
   ./linkedlist
   ```

---

## 📘 Concepts You Will Learn

- Working with **structures (`struct`)**  
- Using **pointers** for dynamic memory management  
- Implementing **linked data structures**  
- Performing **insertion**, **deletion**, and **traversal**  
- Managing memory with `malloc()` and `free()`  
- Reversing and concatenating lists dynamically  

---

## 🧠 Beginner Tips

✅ Start with small lists (3–4 nodes) to observe behavior clearly.  
✅ Use print statements to track pointer changes.  
✅ Visualize nodes using diagrams or paper sketches.  
✅ Try adding new features like searching or counting nodes.  

---

## 🎯 Learning Outcome

After studying this program, you will be able to:
- Create and manipulate a singly linked list.  
- Understand how dynamic memory works in C.  
- Apply linked list logic to real-world problems such as stacks and queues.  

---

⭐ *Keep learning — mastering Linked Lists is your first big step into Data Structures!*  
