# 🧠 Sorting Algorithms in C  

Welcome to **Sorting Algorithms in C** – a beginner-friendly project showcasing the most fundamental sorting techniques implemented in C, with and without pointers.  
This repository is a perfect starting point for anyone exploring **Data Structures and Algorithms (DSA)** for the first time! 🚀

---

## 📂 Project Structure

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

✨ **Bubble Sort** – Repeatedly swaps adjacent elements if they are in the wrong order.  
📍 **Selection Sort** – Finds the smallest element and places it in the correct position.  
✏️ **Insertion Sort** – Builds the sorted array one element at a time by inserting each new element into its correct place.

Each sorting algorithm is implemented **in two ways**:
- 📦 Using **array indexing**  
- 🧭 Using **pointers**

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
