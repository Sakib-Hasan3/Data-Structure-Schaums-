#include<bits/stdc++.h>
#include<stack>
using namespace std;

void stack_pop(){
    stack<int>st;
    st.push(10);
    st.push(20);
    while (!st.empty())
    {
        cout<<st.top()<<"\n";
        st.pop();
    }
    
}
int main(){
    stack_pop();
}