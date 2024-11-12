#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n; 

    int a[n]; 

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }

    // Bubble sort algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                
                int temp = a[j]; 
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Output the sorted array
    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}