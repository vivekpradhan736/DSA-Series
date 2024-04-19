#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>& s, int x) {
    //base case
    if(s.empty()) {
        s.push(x);
        return ;
    }
    
    int num = s.top();
    s.pop();
    
    //recursive call
    solve(s, x);
    
    s.push(num);
}

int main() {
    stack<int> myStack;
    int x = 4;
    myStack.push(12);
    myStack.push(52);
    myStack.push(95);
    myStack.push(38);
    solve(myStack, x);
}