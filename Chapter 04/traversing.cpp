#include <iostream>
using namespace std;
int main() {
    int LA[] = {5, 10, 15, 20, 25}; 
    int LB = 0;                    
    int UB = sizeof(LA) / sizeof(LA[0]) - 1;

    for (int K = LB; K <= UB; K++) {
        cout<<LA[K]<<endl;
    }
   

    return 0;
}
