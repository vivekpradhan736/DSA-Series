#include<iostream>
#include<stack>
using namespace std;

void sortStack(stack<int>&s) {
    stack<int> tempStack;

    while(!s.empty()) {
        int temp = s.top();
        s.pop();

        while(!tempStack.empty() && tempStack.top() > temp) {
            s.push(tempStack.top());
            tempStack.pop();
        }

        tempStack.push(temp);
    }

    while(!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }
}

void sortedInsert(stack<int> &stack, int num) {
    //base case
    if(stack.empty() || (!stack.empty() && stack.top() < num) ) {
        stack.push(num);
        return;
    }
    
    int n = stack.top();
    stack.pop();
    
    //recusrive call
    sortedInsert(stack, num);
    
    stack.push(n);
}

void sortStackWithRecursion(stack<int> &stack)
{
		//base case
    	if(stack.empty()) {
            return ;
        }
    
    	int num = stack.top();
    	stack.pop();
    
    	//recursive call
    	sortStackWithRecursion(stack);
    
    	sortedInsert(stack, num);
}

int main(){
    stack<int> s;
    s.push(30);
    s.push(-5);
    s.push(18);
    s.push(14);
    s.push(-3);

    // sortStack(s);

    // while(!s.empty()) {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    // cout << endl;

    sortStackWithRecursion(s);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}