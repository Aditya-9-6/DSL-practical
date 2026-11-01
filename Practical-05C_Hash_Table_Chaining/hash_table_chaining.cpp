/**
 * Practical No. 5(C)
 * Title: Implement a hash table of size 10 and use the division method as a hash function.
 * In case of a collision, use chaining.
 */

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
