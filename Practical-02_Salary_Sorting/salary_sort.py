"""
Practical No. 02
Title: In a company, employee salaries are stored in a list as floating-point numbers.
Write a Python program that sorts the employee salaries in ascending order using the following two algorithms:
1. Selection Sort: Sort the salaries using the Selection Sort algorithm.
2. Bubble Sort: Sort the salaries using the Bubble Sort algorithm.
After sorting the salaries, the program should display the top five highest salaries in the company.
"""

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
