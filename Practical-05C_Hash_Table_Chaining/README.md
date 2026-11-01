# Practical No. 5(C): Hash Table with Chaining

## Problem Statement
Implement a hash table of size `10` and use the **division method** as a hash function ($h(k) = k \pmod{10}$). In case of a collision, resolve it using **chaining** (linked list at each bucket).

---

## C++ Source Code
File: [`hash_table_chaining.cpp`](hash_table_chaining.cpp)

```cpp
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> ht[10];
    int a[] = {23, 43, 13, 27, 37, 48};
    int n = 6;

    for (int i = 0; i < n; i++)
        ht[a[i] % 10].push_back(a[i]);

    cout << "Hash Table:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << i << " : ";
        for (int x : ht[i])
            cout << x << " -> ";
        cout << "NULL\n";
    }

    return 0;
}
```

---

## How to Compile & Run

```bash
g++ hash_table_chaining.cpp -o hash_chaining
./hash_chaining
```

---

## Expected Output

```text
Hash Table:
0 : NULL
1 : NULL
2 : NULL
3 : 23 -> 43 -> 13 -> NULL
4 : NULL
5 : NULL
6 : NULL
7 : 27 -> 37 -> NULL
8 : 48 -> NULL
9 : NULL
```

---

## Explanation
- **Hash function**: `h(key) = key % 10`
- **Collision resolution**: Separate chaining using `std::list<int>`
- Insertion trace:
  - `23 % 10 = 3` -> placed at index 3
  - `43 % 10 = 3` -> collision, chained at index 3 (`23 -> 43`)
  - `13 % 10 = 3` -> collision, chained at index 3 (`23 -> 43 -> 13`)
  - `27 % 10 = 7` -> placed at index 7
  - `37 % 10 = 7` -> collision, chained at index 7 (`27 -> 37`)
  - `48 % 10 = 8` -> placed at index 8

---

## Complexity Analysis

| Operation | Average Case | Worst Case | Space Complexity |
|---|---|---|---|
| **Insertion** | $O(1)$ | $O(1)$ | $O(N + M)$ |
| **Search** | $O(1 + \alpha)$ | $O(N)$ | $O(1)$ |
| **Deletion** | $O(1 + \alpha)$ | $O(N)$ | $O(1)$ |

*(where $\alpha = N / M$ is the load factor)*
