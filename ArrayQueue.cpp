#include <iostream>
using namespace std;

int main()
{
    int queue[5];
    int front = -1, rear = -1;
    int choice, value;

    while(1)
    {
        cout << "\n\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Display";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        if(choice == 1)
        {
            if(rear == 4)
            {
                cout << "Queue Overflow";
            }
            else
            {
                cout << "Enter value: ";
                cin >> value;

                if(front == -1)
                    front = 0;

                rear++;
                queue[rear] = value;

                cout << "Value inserted";
            }
        }
        else if(choice == 2)
        {
            if(front == -1 || front > rear)
            {
                cout << "Queue Underflow";
            }
            else
            {
                cout << "Deleted value = " << queue[front];
                front++;
            }
        }
        else if(choice == 3)
        {
            if(front == -1 || front > rear)
            {
                cout << "Queue is empty";
            }
            else
            {
                cout << "Queue: ";

                for(int i = front; i <= rear; i++)
                    cout << queue[i] << " ";
            }
        }
        else if(choice == 4)
        {
            break;
        }
        else
        {
            cout << "Invalid choice";
        }
    }

    return 0;
}