#include <bits/stdc++.h>
using namespace std;

void POSTFIX(string p) {
    stack<int> s;
    
    for (int i = 0; i < p.size(); i++) {
        // If the character is a digit, push it as an integer onto the stack
        if (p[i] >= '0' && p[i] <= '9') {
            s.push(p[i] - '0');  // Convert character to integer
        } 
        // Otherwise, it's an operator; pop two values and apply the operator
        else {
            int op1 = s.top(); s.pop();
            int op2 = s.top(); s.pop();
            
            switch (p[i]) {
                case '+':
                    s.push(op2 + op1);
                    break;
                case '-':
                    s.push(op2 - op1);
                    break;
                case '*':
                    s.push(op2 * op1);
                    break;
                case '/':
                    s.push(op2 / op1);
                    break;
                case '^':
                    s.push(pow(op2, op1));
                    break;
            }
        }
    }
    
    cout << "Result: " << s.top() << endl;
}

int main() {
    string p;
    cout << "Enter postfix expression: ";
    cin >> p;
    POSTFIX(p);
    return 0;
}

/*Enter postfix expression: 53+82-*
Result: 48
*/