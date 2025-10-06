# 🧠 Sorting Algorithms in C  

Welcome to **Sorting Algorithms in C** – a beginner-friendly project showcasing the most fundamental sorting techniques implemented in C, with and without pointers.  
This repository is a perfect starting point for anyone exploring **Data Structures and Algorithms (DSA)** for the first time! 🚀

---

## 📂 Folder Structure

```
Sorting_Algorithms/
│
├── BubbleSort/
│   ├── Bubblesort.c                # Bubble Sort using arrays
│   └── BubblesortPointers.c       # Bubble Sort using pointers
│
├── InsertionSort/
│   ├── Insertionsort.c            # Insertion Sort using arrays
│   └── InsertionsortPointers.c    # Insertion Sort using pointers
│
├── SelectionSort/
│   ├── selection_sort.c           # Selection Sort using arrays
│   └── selection_sortPointers.c   # Selection Sort using pointers
│
├── MenuDrivenProgram.c            # Try all sorting algorithms interactively
└── README.md
```

---

## 📊 Algorithms Included

Here are the sorting algorithms you'll learn and implement in this project. Each one has its own logic and use case, but all share the same goal — **arranging data in a specific order** (usually ascending or descending). ✨

---

### 🔁 Bubble Sort  
Bubble Sort is the simplest sorting algorithm and a great starting point for beginners.  
- It works by **repeatedly comparing adjacent elements** and swapping them if they are in the wrong order.  
- This process is repeated until the entire array is sorted.  
- After each pass, the largest element "bubbles up" to its correct position at the end of the array.  

📌 **Example:**  
Original: `[5, 2, 4, 1]`  
1st Pass: `[2, 4, 1, 5]`  
2nd Pass: `[2, 1, 4, 5]`  
3rd Pass: `[1, 2, 4, 5]` ✅ Sorted!

👉 **Best for:** Learning how basic sorting works step-by-step.  
👉 **Time Complexity:** O(n²) – not the fastest, but very easy to understand.

---

### 📍 Selection Sort  
Selection Sort improves efficiency slightly by reducing unnecessary swaps.  
- It **divides the array into a sorted and an unsorted part**.  
- On each pass, it **selects the smallest element from the unsorted part** and swaps it with the first unsorted element.  
- The sorted part grows from left to right until the entire array is sorted.

📌 **Example:**  
Original: `[5, 2, 4, 1]`  
Step 1: `[1, 2, 4, 5]` (1 is placed first)  
Step 2: `[1, 2, 4, 5]` (2 stays in place)  
Step 3: `[1, 2, 4, 5]` (4 stays in place) ✅ Sorted!

👉 **Best for:** Understanding how sorting can be done by **finding the smallest element** each time.  
👉 **Time Complexity:** O(n²)

---

### ✏️ Insertion Sort  
Insertion Sort mimics how we sort playing cards in our hands — by **inserting each element into its correct position** one by one.  
- It builds the sorted array gradually, starting with one element.  
- Each new element is **compared with the already sorted part** and inserted where it belongs.  
- As a result, the sorted portion of the array grows with each iteration.

📌 **Example:**  
Original: `[5, 2, 4, 1]`  
Step 1: `[2, 5, 4, 1]`  
Step 2: `[2, 4, 5, 1]`  
Step 3: `[1, 2, 4, 5]` ✅ Sorted!

👉 **Best for:** Small datasets and scenarios where the data is **almost sorted**.  
👉 **Time Complexity:** O(n²) (but faster than Bubble Sort for small or nearly sorted arrays)

---

Each algorithm is implemented **in two ways** in this repository:
- 📦 **Using array indexing** – standard method with `[ ]` notation.  
- 🧭 **Using pointers** – memory-efficient and a great way to understand how arrays work internally.

---

## 🧪 How to Compile and Run

Make sure you have a C compiler like `gcc` installed.  
Use the following commands in your terminal:

```bash
# Compile an individual algorithm
gcc BubbleSort/Bubblesort.c -o bubblesort
./bubblesort

# Run the menu-driven program
gcc MenuDrivenProgram.c -o sort_menu
./sort_menu
```

---

## 📚 Sample Output (Menu Driven Program)

```
Please choose the action:
1. Bubblesort
2. Bubblesort with Pointers
3. Selection Sort
4. Selection Sort with Pointers
5. Insertion Sort
6. Insertion Sort with Pointers

Please choose the appropriate index number: 1
Enter the length of array: 5
Enter the 1 element of array: 34
Enter the 2 element of array: 12
Enter the 3 element of array: 45
Enter the 4 element of array: 2
Enter the 5 element of array: 9

The sorted array is:
2 9 12 34 45
```

---

## 🌱 What You’ll Learn

✅ How basic sorting algorithms work step-by-step  
✅ Difference between **pointer-based** and **index-based** approaches  
✅ Writing clean, modular, and reusable C code  
✅ Building a **menu-driven program** to test algorithms interactively  

---

## 🛠️ Next Steps

💡 Add more sorting algorithms like **Merge Sort** or **Quick Sort**  
💡 Include **time and space complexity** details in comments  
💡 Create a program to compare the performance of all sorting algorithms  

---

✨ **Ready? Open the files, run the code, and start exploring the world of sorting algorithms today!** ✨
