#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x; 
    cin >> x;

    int left = 0;
    int right = n - 1;
    int mid;

    // Binary search
    while (left <= right) {
        mid = left + (right - left) / 2; // Calculate mid

        if (a[mid] == x) {
            cout << "Element found at index: " << mid << endl;
            return 0; // Exit the program if the element is found
        }
        else if (a[mid] > x) {
            right = mid - 1; // Search in the left half
        }
        else {
            left = mid + 1; // Search in the right half
        }
    }

    cout << "Element not found" << endl; // If the element is not found
    return 0;
}