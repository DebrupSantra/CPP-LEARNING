#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter alphabet: ";
    cin >> ch;
    int c=(int) ch;
    if (c>=65 && c<=90){
        cout << ch << " is Uppercase";
    }
    else if (c>=97 && c<=122){
        cout << ch << " is Lowercase";
    }
    else{
        cout << "You have not input an alphabet!";
    }
    return 0;
}