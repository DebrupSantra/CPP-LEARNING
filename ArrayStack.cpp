#include <iostream>
using namespace std;

int main()
{
    int stack[5];
    int top = -1;
    int choice, value;

    while(1)
    {
        cout << "\n\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Display";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        if(choice == 1)
        {
            if(top == 4)
            {
                cout << "Stack Overflow";
            }
            else
            {
                cout << "Enter value: ";
                cin >> value;

                top++;
                stack[top] = value;

                cout << "Value pushed";
            }
        }
        else if(choice == 2)
        {
            if(top == -1)
            {
                cout << "Stack Underflow";
            }
            else
            {
                cout << "Popped value = " << stack[top];
                top--;
            }
        }
        else if(choice == 3)
        {
            if(top == -1)
            {
                cout << "Stack is empty";
            }
            else
            {
                cout << "Stack: ";

                for(int i = top; i >= 0; i--)
                    cout << stack[i] << " ";
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