#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    // Input dimensions for matrices
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // Check if matrices can be multiplied
    if (c1 != r2) {
        cout << "Matrix multiplication is not possible with the given dimensions." << endl;
        return 0;
    }

    // Define matrices
    int mat1[10][10], mat2[10][10], result[10][10] = {0};

    // Input elements for first matrix
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cin >> mat1[i][j];
        }
    }

    // Input elements for second matrix
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cin >> mat2[i][j];
        }
    }

    // Matrix multiplication
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Output the result matrix
    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
