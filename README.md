# Data Structures Laboratory (DSL) Practical Programs

Complete collection of Data Structures Laboratory (DSL) practical assignments with source codes, explanations, complexity analysis, and verified outputs.

The original PDF lab manual with all problem statements and outputs is also included directly in this repository:
📄 **[`DS_All_Practical Program with Outputs.pdf`](./DS_All_Practical%20Program%20with%20Outputs.pdf)**

---

## 📚 Table of Practicals

| Practical No. | Title / Topic | Language | Source Code | Folder |
| :--- | :--- | :---: | :--- | :--- |
| **01** | Library Book Borrowing Records Analysis | Python | [`library_records.py`](./Practical-01_Library_Borrowing_Records/library_records.py) | [Practical 01](./Practical-01_Library_Borrowing_Records/) |
| **02** | Employee Salary Sorting (Selection & Bubble Sort) | Python | [`salary_sort.py`](./Practical-02_Salary_Sorting/salary_sort.py) | [Practical 02](./Practical-02_Salary_Sorting/) |
| **03** | Real-Time Text Editor Undo/Redo System | C++ | [`text_editor_undo_redo.cpp`](./Practical-03_Text_Editor_Undo_Redo/text_editor_undo_redo.cpp) | [Practical 03](./Practical-03_Text_Editor_Undo_Redo/) |
| **04** | Real-Time Event Processing System | C++ | [`event_processing_queue.cpp`](./Practical-04_Event_Processing_Queue/event_processing_queue.cpp) | [Practical 04](./Practical-04_Event_Processing_Queue/) |
| **05(C)** | Hash Table with Division Method & Chaining | C++ | [`hash_table_chaining.cpp`](./Practical-05C_Hash_Table_Chaining/hash_table_chaining.cpp) | [Practical 05(C)](./Practical-05C_Hash_Table_Chaining/) |
| **06(C)** | Hash Table with Linear Probing (Insert, Search, Delete) | C++ | [`hash_table_linear_probing.cpp`](./Practical-06C_Hash_Table_Linear_Probing/hash_table_linear_probing.cpp) | [Practical 06(C)](./Practical-06C_Hash_Table_Linear_Probing/) |
| **07(D)** | Graph Traversal (DFS & BFS) for City Navigation | C | [`graph_dfs_bfs.c`](./Practical-07D_Graph_DFS_BFS/graph_dfs_bfs.c) | [Practical 07(D)](./Practical-07D_Graph_DFS_BFS/) |
| **08(D)** | Binary Search Tree (BST) Operations | C | [`binary_search_tree.c`](./Practical-08D_Binary_Search_Tree/binary_search_tree.c) | [Practical 08(D)](./Practical-08D_Binary_Search_Tree/) |

---

## 🛠️ Requirements & Compilation

### Python Programs (Practical 1 & 2)
Requires Python 3.x:
```bash
python Practical-01_Library_Borrowing_Records/library_records.py
python Practical-02_Salary_Sorting/salary_sort.py
```

### C++ Programs (Practical 3, 4, 5C, 6C)
Compile with `g++` (C++11 or later):
```bash
# Practical 3
g++ Practical-03_Text_Editor_Undo_Redo/text_editor_undo_redo.cpp -o text_editor
./text_editor

# Practical 4
g++ Practical-04_Event_Processing_Queue/event_processing_queue.cpp -o event_queue
./event_queue

# Practical 5(C)
g++ Practical-05C_Hash_Table_Chaining/hash_table_chaining.cpp -o hash_chaining
./hash_chaining

# Practical 6(C)
g++ Practical-06C_Hash_Table_Linear_Probing/hash_table_linear_probing.cpp -o hash_linear
./hash_linear
```

### C Programs (Practical 7D, 8D)
Compile with `gcc`:
```bash
# Practical 7(D)
gcc Practical-07D_Graph_DFS_BFS/graph_dfs_bfs.c -o graph_traversal
./graph_traversal

# Practical 8(D)
gcc Practical-08D_Binary_Search_Tree/binary_search_tree.c -o bst
./bst
```

---

## 📖 Practical Details & Quick Reference

### Practical 01: Library Book Borrowing Records
- **Problem**: Manage book borrowing records, calculate average borrowings, min/max borrowings, count members with zero borrowings, and find the mode borrowing frequency.
- **Data Structure**: Array / List, Frequency Hash Map (`collections.Counter`).
- **File**: [`Practical-01_Library_Borrowing_Records/library_records.py`](./Practical-01_Library_Borrowing_Records/library_records.py)

### Practical 02: Employee Salary Sorting
- **Problem**: Sort floating-point employee salaries in ascending order using Selection Sort and Bubble Sort, then display the top 5 highest salaries.
- **Algorithm**: Selection Sort ($O(N^2)$), Bubble Sort ($O(N^2)$).
- **File**: [`Practical-02_Salary_Sorting/salary_sort.py`](./Practical-02_Salary_Sorting/salary_sort.py)

### Practical 03: Text Editor Undo/Redo System
- **Problem**: Implement real-time Undo and Redo operations using stacks (`undoStack` and `redoStack`).
- **Data Structure**: Stack (`std::stack<std::string>`).
- **File**: [`Practical-03_Text_Editor_Undo_Redo/text_editor_undo_redo.cpp`](./Practical-03_Text_Editor_Undo_Redo/text_editor_undo_redo.cpp)

### Practical 04: Real-Time Event Processing System
- **Problem**: Process events sequentially using FIFO queue with support for Adding, Processing, Displaying, and Canceling events.
- **Data Structure**: Queue (`std::queue<std::string>`).
- **File**: [`Practical-04_Event_Processing_Queue/event_processing_queue.cpp`](./Practical-04_Event_Processing_Queue/event_processing_queue.cpp)

### Practical 05(C): Hash Table with Chaining
- **Problem**: Fixed size 10 hash table using division hash method ($k \pmod{10}$) and separate chaining for collision resolution.
- **Data Structure**: Array of Linked Lists (`std::list<int> ht[10]`).
- **File**: [`Practical-05C_Hash_Table_Chaining/hash_table_chaining.cpp`](./Practical-05C_Hash_Table_Chaining/hash_table_chaining.cpp)

### Practical 06(C): Hash Table with Linear Probing
- **Problem**: Fixed size 10 hash table using division method and open addressing (linear probing) supporting Insertion, Search, Deletion, and Display.
- **Data Structure**: Static Array.
- **File**: [`Practical-06C_Hash_Table_Linear_Probing/hash_table_linear_probing.cpp`](./Practical-06C_Hash_Table_Linear_Probing/hash_table_linear_probing.cpp)

### Practical 07(D): Graph Traversal (DFS & BFS)
- **Problem**: Represent city locations as graph nodes and find visit order starting from 'A' using DFS (Adjacency Matrix) and BFS (Adjacency Matrix / Queue).
- **Data Structure**: Adjacency Matrix, Queue, Visited Array, Recursion Stack.
- **File**: [`Practical-07D_Graph_DFS_BFS/graph_dfs_bfs.c`](./Practical-07D_Graph_DFS_BFS/graph_dfs_bfs.c)

### Practical 08(D): Binary Search Tree (BST) Operations
- **Problem**: Implement core BST operations: Insertion, Inorder Traversal, Search, and Deletion (handling 0, 1, and 2 children cases).
- **Data Structure**: Binary Search Tree (linked dynamic nodes).
- **File**: [`Practical-08D_Binary_Search_Tree/binary_search_tree.c`](./Practical-08D_Binary_Search_Tree/binary_search_tree.c)

---

## 📄 Lab Manual PDF
The original PDF is available at [`DS_All_Practical Program with Outputs.pdf`](./DS_All_Practical%20Program%20with%20Outputs.pdf). You can download or view it directly on GitHub.
