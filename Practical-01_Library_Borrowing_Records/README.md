# Practical No. 01: Library Book Borrowing Records

## Problem Statement
Write a Python program to manage the borrowing records of books in a library. Implement the following functionalities:
1. Compute the average number of books borrowed by all library members.
2. Find the book with the highest and lowest number of borrowings in the library.
3. Count the number of members who have not borrowed any books (denoted by a borrow count of `0`).
4. Display the most frequently borrowed book (i.e., the mode of borrow counts).
5. Determine the time and space complexity of each operation.

---

## Python Source Code
File: [`library_records.py`](library_records.py)

```python
from collections import Counter

# Borrowing records of library members
borrow_counts = [3, 0, 2, 5, 0, 3, 1, 4, 3, 2]

# 1. Compute average number of books borrowed
total = sum(borrow_counts)
average = total / len(borrow_counts)
print("Borrowing Records:", borrow_counts)
print("Average number of books borrowed:", average)

# 2. Find highest and lowest number of borrowings
highest = max(borrow_counts)
lowest = min(borrow_counts)
print("Highest number of borrowings:", highest)
print("Lowest number of borrowings:", lowest)

# 3. Count members who have not borrowed any books
zero_count = borrow_counts.count(0)
print("Number of members who borrowed 0 books:", zero_count)

# 4. Find the most frequently borrowed count (Mode)
frequency = Counter(borrow_counts)
mode = frequency.most_common(1)[0][0]
print("Most frequently borrowed count (Mode):", mode)
```

---

## How to Run

```bash
python library_records.py
```

---

## Expected Output

```text
Borrowing Records: [3, 0, 2, 5, 0, 3, 1, 4, 3, 2]
Average number of books borrowed: 2.3
Highest number of borrowings: 5
Lowest number of borrowings: 0
Number of members who borrowed 0 books: 2
Most frequently borrowed count (Mode): 3
```

---

## Complexity Analysis

| Operation | Time Complexity | Space Complexity |
|---|---|---|
| **Average Calculation** (`sum` + division) | $O(N)$ | $O(1)$ |
| **Max / Min Search** (`max`, `min`) | $O(N)$ | $O(1)$ |
| **Zero Count** (`count(0)`) | $O(N)$ | $O(1)$ |
| **Mode Calculation** (`Counter`) | $O(N)$ | $O(K)$ (where $K \le N$ is unique values) |
