"""
Practical No. 01
Title: Write a Python program to manage the borrowing records of books in a library.
Implement the following functionalities:
1. Compute the average number of books borrowed by all library members.
2. Find the book with the highest and lowest number of borrowings in the library.
3. Count the number of members who have not borrowed any books (denoted by a borrow count of 0).
4. Display the most frequently borrowed book (i.e., the mode of borrow counts).
After performing, determine the time and space complexity of each operation.
"""

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
