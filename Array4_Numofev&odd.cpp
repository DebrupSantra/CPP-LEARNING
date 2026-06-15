#include <iostream>
using namespace std;

int main() {
   int marks[6];
   int ev=0;
   int odd=0;
   for (int i=0; i<6;i++){
    cout << "Enter number: ";
    cin >> marks[i];
   }
   for (int j=0; j<6; j++){
    if (marks[j]%2==0){
        ev=ev+1;
    }
    else{
        odd=odd+1;
    }
    }
    cout << "Number of even numbers: " << ev << endl;
    cout << "Number of odd numbers: " << odd;
    return 0;
   }