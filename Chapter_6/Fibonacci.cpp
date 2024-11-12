#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the position of the Fibonacci number you want: ";
    cin >> n;

    int fibonacci=1;

    if (n == 0 || n == 1) {
        fibonacci = n;
    } else {
        int a = 0, b = 1;
        for (int i = 2; i <= n; i++) {
            fibonacci = a + b;
            a = b;
            b = fibonacci;
        }
    }

    cout << "The " << n << "th Fibonacci number is: " << fibonacci << "\n";
    return 0;
}
