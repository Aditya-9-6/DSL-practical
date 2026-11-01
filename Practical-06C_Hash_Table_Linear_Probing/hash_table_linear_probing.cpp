/**
 * Practical No. 6(C)
 * Title: Design and implement a hash table of fixed size. Use the division method for the
 * hash function and resolve collisions using linear probing. Allow the user to perform
 * the following operations:
 * 1. Insert a key
 * 2. Search for a key
 * 3. Delete a key
 * 4. Display the table
 */

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
