#include <iostream>
using namespace std;
double c=0.0;
double min(double a, double b){
    if (a<b){
        c=a;
    }
    else if(a==b){
        cout << "They are the same numbers!";
    }
    else{
        c=b;
    }
    return c;
}
int main() {
    double m,n;
    cout << "Enter the first number: ";
    cin >> m;
    cout << "Enter the second number: ";
    cin >> n;
    cout << min(m,n) << " is the smaller number";
    return 0;
}