#include <iostream>
using namespace std;

int main() {
   int marks[5];
   int max=0;
   for (int i=0; i<5;i++){
    cout << "Enter marks: ";
    cin >> marks[i];
   }
   for (int j=0; j<5; j++){
    if (max<marks[j]){
        max=marks[j];
    }
   }
   cout << "Highest marks is: " << max;
    return 0;
}