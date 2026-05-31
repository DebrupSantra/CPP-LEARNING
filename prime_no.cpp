#include <iostream>
using namespace std;
int main(){
    int n;
    int c=0;
    cout << "Enter the number: ";
    cin >> n;
    for(int i=2; i<n;i=i+1){
        if (n%i==0){
            c=c+1;
        }
    }
    if (c==0){
        cout << n << " is a prime number";
    }
    else{
        cout << n << " is not a prime number";
    }
}