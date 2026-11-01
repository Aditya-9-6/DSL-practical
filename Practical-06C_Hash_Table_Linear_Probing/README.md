# Practical No. 6(C): Hash Table with Linear Probing

## Problem Statement
Design and implement a hash table of fixed size (`10`). Use the division method for the hash function ($h(k) = k \pmod{10}$) and resolve collisions using **linear probing** ($h'(k, i) = (h(k) + i) \pmod{10}$).

Allow the user to perform the following operations:
1. **Insert a key**
2. **Search for a key**
3. **Delete a key**
4. **Display the table**

---

## C++ Source Code
File: [`hash_table_linear_probing.cpp`](hash_table_linear_probing.cpp)

```cpp
#include <iostream>
using namespace std;

#define SIZE 10
int h[SIZE];

void insert(int k) {
    int i = k % SIZE;
    while (h[i] != -1)
        i = (i + 1) % SIZE;
    h[i] = k;
}

void search(int k) {
    int i = k % SIZE;
    while (h[i] != -1) {
        if (h[i] == k) {
            cout << k << " found at " << i << endl;
            return;
        }
        i = (i + 1) % SIZE;
    }
    cout << k << " not found\n";
}

void del(int k) {
    int i = k % SIZE;
    while (h[i] != -1) {
        if (h[i] == k) {
            h[i] = -1;
            cout << k << " deleted\n";
            return;
        }
        i = (i + 1) % SIZE;
    }
}

void display() {
    for (int i = 0; i < SIZE; i++)
        cout << i << " : " << h[i] << endl;
}

int main() {
    for (int i = 0; i < SIZE; i++) h[i] = -1;

    insert(25);
    insert(35);
    insert(15);
    insert(42);

    cout << "Hash Table:\n";
    display();

    search(35);
    del(25);

    cout << "\nAfter deletion:\n";
    display();

    return 0;
}
```

---

## How to Compile & Run

```bash
g++ hash_table_linear_probing.cpp -o hash_linear
./hash_linear
```

---

## Expected Output

```text
Hash Table:
0 : -1
1 : -1
2 : 42
3 : -1
4 : -1
5 : 25
6 : 35
7 : 15
8 : -1
9 : -1
35 found at 6
25 deleted

After deletion:
0 : -1
1 : -1
2 : 42
3 : -1
4 : -1
5 : -1
6 : 35
7 : 15
8 : -1
9 : -1
```

---

## Complexity Analysis

| Operation | Average Case | Worst Case | Space Complexity |
|---|---|---|---|
| **Insert** | $O(1)$ | $O(N)$ | $O(1)$ |
| **Search** | $O(1)$ | $O(N)$ | $O(1)$ |
| **Delete** | $O(1)$ | $O(N)$ | $O(1)$ |
| **Display** | $O(N)$ | $O(N)$ | $O(1)$ |
