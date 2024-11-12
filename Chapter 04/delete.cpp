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

    int index;
    cin >> index;  // Read position and value to delete

    // Shift elements to the right to make space for the new element
    for (int i = index; i<n; i++) {
        a[i] = a[i+1];
    }
    
   
    // Print the updated array
    for (int i = 0; i < n-1; i++) {
        cout << a[i] << endl;
    }

    return 0;
}
