# Practical No. 04: Real-Time Event Processing System Using Queue

## Problem Statement
Implement a real-time event processing system using a Queue data structure and perform the following operations:
1. **Add Event**: Enqueue a new incoming event.
2. **Process Event**: Dequeue and handle the next event in order (FIFO).
3. **Display Events**: Print all current pending events.
4. **Cancel Event**: Remove a specific event from the pending queue.
5. **Exit**: Terminate the system.

---

## C++ Source Code
File: [`event_processing_queue.cpp`](event_processing_queue.cpp)

```cpp
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    queue<string> q;
    int choice;
    string event;

    do
    {
        cout << "\n1.Add Event\n2.Process Event\n3.Display Events\n4.Cancel Event\n5.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter event: ";
                cin >> event;
                q.push(event);
                cout << "Event added.\n";
                break;

            case 2:
                if(q.empty())
                    cout << "Queue is empty.\n";
                else
                {
                    cout << "Processed: " << q.front() << endl;
                    q.pop();
                }
                break;

            case 3:
                if(q.empty())
                    cout << "No pending events.\n";
                else
                {
                    queue<string> temp = q;
                    cout << "Pending Events: ";
                    while(!temp.empty())
                    {
                        cout << temp.front() << " ";
                        temp.pop();
                    }
                    cout << endl;
                }
                break;

            case 4:
                cout << "Enter event to cancel: ";
                cin >> event;
                {
                    queue<string> temp;
                    while(!q.empty())
                    {
                        if(q.front() != event)
                            temp.push(q.front());
                        q.pop();
                    }
                    q = temp;
                    cout << "Event cancelled.\n";
                }
                break;
        }
    } while(choice != 5);

    return 0;
}
```

---

## How to Compile & Run

```bash
g++ event_processing_queue.cpp -o event_queue
./event_queue
```

---

## Sample Input & Output

### Input Sequence:
```text
1
Payment
1
Login
1
Order
3
2
4
Login
3
5
```

### Output:
```text
1. Add Event 
2. Process Event 
3. Display Events 
4. Cancel Event 
5. Exit 
 
Enter choice: 1 
Enter event: Payment 
Event added. 
 
Enter choice: 1 
Enter event: Login 
Event added. 
 
Enter choice: 1 
Enter event: Order 
Event added. 
 
Enter choice: 3 
Pending Events: Payment Login Order 
 
Enter choice: 2 
Processed: Payment 
 
Enter choice: 4 
Enter event to cancel: Login 
Event cancelled. 
 
Enter choice: 3 
Pending Events: Order 
 
Enter choice: 5 
```

---

## Complexity Analysis

| Operation | Time Complexity | Space Complexity |
|---|---|---|
| **Add Event (Enqueue)** | $O(1)$ | $O(1)$ |
| **Process Event (Dequeue)** | $O(1)$ | $O(1)$ |
| **Display Events** | $O(N)$ | $O(N)$ (temp queue copy) |
| **Cancel Event** | $O(N)$ | $O(N)$ (filtering copy) |
