#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    // Factorial using loop
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial using loop: " << fact << "\n";

    // Factorial using recursion
    int factorialRec = 1; // We will calculate factorialRec recursively
    if (n == 0) {
        factorialRec = 1;
    } else {
        int temp = n;
        while (temp > 1) {
            factorialRec *= temp;
            temp--;
        }
    }
    cout << "Factorial using recursion logic: " << factorialRec << "\n";

    return 0;
}
