#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int loc = 0;
    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x; 
    cin >> x;
     for (int i = 0; i < n; i++) {
        if(a[i]==x)
        loc++;
    }
    if(loc==0){
        cout<<"ITEM is not found"<<endl;
    }
    else {
        cout << "ITEM is found " << loc << " times" << endl; // Show how many times it was found
    }
}
