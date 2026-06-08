#include <iostream>
using namespace std;
int c=0;
int sum(int n){
    for(int i=1;i<=n;i=i+1){
        c=c+i;
    }
    return c;
}
int main() {
   int num;
   cout << "Enter n: ";
   cin >> num;
   cout << "Sum of numbers till " << num << " is " << sum(num);
   return 0;
}