# Practical No. 02: Employee Salary Sorting (Selection Sort & Bubble Sort)

## Problem Statement
In a company, employee salaries are stored in a list as floating-point numbers. Write a Python program that sorts the employee salaries in ascending order using the following two algorithms:
1. **Selection Sort**: Sort the salaries using the Selection Sort algorithm.
2. **Bubble Sort**: Sort the salaries using the Bubble Sort algorithm.

After sorting the salaries, the program should display the **top five highest salaries** in the company.

---

## Python Source Code
File: [`salary_sort.py`](salary_sort.py)

```python
# Function for Selection Sort
def selection_sort(arr):
    n = len(arr)
    sorted_arr = arr.copy()
    for i in range(n):
        min_index = i
        for j in range(i + 1, n):
            if sorted_arr[j] < sorted_arr[min_index]:
                min_index = j
        sorted_arr[i], sorted_arr[min_index] = sorted_arr[min_index], sorted_arr[i]
    return sorted_arr

# Function for Bubble Sort
def bubble_sort(arr):
    n = len(arr)
    sorted_arr = arr.copy()
    for i in range(n):
        for j in range(0, n - i - 1):
            if sorted_arr[j] > sorted_arr[j + 1]:
                sorted_arr[j], sorted_arr[j + 1] = sorted_arr[j + 1], sorted_arr[j]
    return sorted_arr

# Main Program
if __name__ == "__main__":
    salaries = []
    n = int(input("Enter the number of employees: "))
    for i in range(n):
        salary = float(input(f"Enter salary of employee {i + 1}: "))
        salaries.append(salary)

    # Selection Sort
    selection_sorted = selection_sort(salaries)
    print("\nSalaries after Selection Sort (Ascending):")
    print(selection_sorted)

    # Bubble Sort
    bubble_sorted = bubble_sort(salaries)
    print("\nSalaries after Bubble Sort (Ascending):")
    print(bubble_sorted)

    # Display Top Five Highest Salaries
    print("\nTop Five Highest Salaries:")
    top_five = bubble_sorted[-5:] if len(bubble_sorted) >= 5 else bubble_sorted
    top_five.reverse()
    for i, salary in enumerate(top_five, start=1):
        print(f"{i}. {salary}")
```

---

## How to Run

```bash
python salary_sort.py
```

---

## Sample Input & Output

### Input:
```text
7
35000
42000
28000
50000
39000
47000
31000
```

### Output:
```text
Enter the number of employees: 7 
Enter salary of employee 1: 35000 
Enter salary of employee 2: 42000 
Enter salary of employee 3: 28000 
Enter salary of employee 4: 50000 
Enter salary of employee 5: 39000 
Enter salary of employee 6: 47000 
Enter salary of employee 7: 31000 
 
Salaries after Selection Sort (Ascending): 
[28000.0, 31000.0, 35000.0, 39000.0, 42000.0, 47000.0, 50000.0] 
 
Salaries after Bubble Sort (Ascending): 
[28000.0, 31000.0, 35000.0, 39000.0, 42000.0, 47000.0, 50000.0] 
 
Top Five Highest Salaries: 
1. 50000.0 
2. 47000.0 
3. 42000.0 
4. 39000.0 
5. 35000.0 
```

---

## Complexity Analysis

| Algorithm | Best Case | Average Case | Worst Case | Auxiliary Space |
|---|---|---|---|---|
| **Selection Sort** | $O(N^2)$ | $O(N^2)$ | $O(N^2)$ | $O(1)$ |
| **Bubble Sort** | $O(N)$ (optimized) / $O(N^2)$ | $O(N^2)$ | $O(N^2)$ | $O(1)$ |
