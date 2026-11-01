/**
 * Practical No. 04
 * Title: To implement a real-time event processing system using a Queue data structure
 * and perform Add, Process, Display, and Cancel event operations.
 */

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
