#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    char stack[50];
    int top = -1;
    int flag = 1;

    cout << "Enter a string: ";
    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        top++;
        stack[top] = str[i];
    }

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != stack[top])
        {
            flag = 0;
            break;
        }

        top--;
    }

    if(flag == 1)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}