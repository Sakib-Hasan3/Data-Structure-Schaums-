#include<iostream>
using namespace std;

void towerOfHanoi(int n, char beg, char aux, char end) {
    if (n == 1) {
        cout << beg << " --> " << end << endl;
        return;
    }
    towerOfHanoi(n - 1, beg, end, aux);
    cout << beg << " --> " << end << endl;
    towerOfHanoi(n - 1, aux, beg, end);
}

int main() {
    int numDisks;
    cout << "Enter the number of disks: ";
    cin >> numDisks;

    if (numDisks <= 0) {
        cout << "Number of disks must be a positive integer." << endl;
    } else {
        towerOfHanoi(numDisks, 'A', 'B', 'C');
    }
    return 0;
}
