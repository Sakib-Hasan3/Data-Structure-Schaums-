#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the size of the array
    int a[n + 1];  // Create an array of size n + 1 to accommodate the new element

    // Read elements into the array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int pos, x;
    cin >> pos >> x;  // Read position and value to insert

    // Shift elements to the right to make space for the new element
    for (int i = n; i > pos-1; i--) {
        a[i] = a[i - 1];
    }
    
    // Insert the new element
    a[pos - 1] = x;  
    n++;  // Increment the size of the array

    // Print the updated array
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}
