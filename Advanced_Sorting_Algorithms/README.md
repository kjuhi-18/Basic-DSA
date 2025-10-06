# 📚 Advanced Sorting Algorithms

Welcome to the **Advanced Sorting Algorithms** repository! 🚀  
This repository contains implementations of some of the most important and efficient **sorting algorithms in C**, designed to help beginners understand how sorting works and how to implement it practically.

---

## 📂 Folder Structure

```
Advanced_Sorting_Algorithms/
│
├── Merge Sort/
│   └── mergesort.c
│
├── QuickSort/
│   ├── qs_pivotbegin.c
│   ├── qs_pivotlast.c
│   └── qs_pivotmiddle.c
│
├── MenuDrivenProgram.c
└── README.md
```

---

## 📝 Overview of Sorting Algorithms

### 1️⃣ Merge Sort
**Merge Sort** is a **divide and conquer** algorithm that divides the array into two halves, recursively sorts them, and then merges the sorted halves.  

**Key Points:**
- ⏱ Time Complexity: `O(n log n)` (best, average, worst)
- 💾 Space Complexity: `O(n)` (requires extra memory for merging)
- 🔄 Stable Sort: ✅ (preserves relative order of equal elements)
- 🌟 Ideal for **large datasets**

**How it works:**
1. Divide the array into two halves.
2. Recursively sort each half.
3. Merge the sorted halves into a single sorted array.

📂 The code is in: `Merge Sort/mergesort.c`

---

### 2️⃣ Quick Sort
**Quick Sort** is another **divide and conquer** algorithm. It picks an element as a **pivot** and partitions the array around the pivot so that smaller elements come before it and larger elements come after.  

**Key Points:**
- ⏱ Time Complexity:  
  - Best & Average: `O(n log n)`  
  - Worst: `O(n^2)` (if pivot selection is poor)
- 💾 Space Complexity: `O(log n)` (recursive stack)
- 🔄 Stable Sort: ❌
- ⚡ Very fast for **medium to large datasets**

**Pivot Selection Variants in this repo:**
1. **First element as pivot** → `QuickSort/qs_pivotbegin.c`  
2. **Last element as pivot** → `QuickSort/qs_pivotlast.c`  
3. **Middle element as pivot** → `QuickSort/qs_pivotmiddle.c`  

---

### 3️⃣ Menu Driven Program
`MenuDrivenProgram.c` provides a **user-friendly interface** to choose which sorting algorithm to run.  
You can test **Merge Sort** or **Quick Sort** with sample inputs easily. 🖱️

---

## ⚡ How to Use

1. Open your terminal or command prompt.
2. Navigate to the folder containing the `.c` files.
3. Compile any program using:
   ```bash
   gcc filename.c -o outputname
   ```
4. Run the program:
   ```bash
   ./outputname
   ```
5. Follow the on-screen menu to sort arrays and test algorithms.

---

## 🎯 Key Takeaways
- **Merge Sort** is stable and uses extra memory — great for **large datasets**.  
- **Quick Sort** is usually faster in practice but depends on pivot selection.  
- Understanding both helps in **choosing the right algorithm** for your task.  

Ready to explore sorting algorithms? 🔥  
Open the `.c` files, run the code, and see the magic of sorting in action! 🌟

