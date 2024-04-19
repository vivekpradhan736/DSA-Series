#include<iostream>
#include<stack>
using namespace std;

class Stack {
    //Properties
    public:
    int *arr;
    int top;
    int size;

    //behaviour / constructor
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
};

    Stack* push(Stack &st, int data) {
        if(st.size - st.top > 1) {
            st.top++;
            st.arr[st.top] = data;
        }
        else {
            cout << " Stack Overflow " << endl;
        }
    }

    Stack* print(Stack &st) {
        for(int i = 0; i <= st.top; i++) {
            cout << st.arr[i] << " ";
        }
        cout << endl;
    }

    Stack* pop(Stack &st) {
        if(st.top >= 0){
            st.top--;
        }
        else{
            cout << " Stack is Underflow " << endl;
        }
    }

    int peek(Stack &st) {
        if(st.top >=0 )
            return st.arr[st.top];
        else
        {
            cout << "Stack is Empty" << endl;
            return 0;
        }
    }

    Stack* isEmpty(Stack &st) {
        if(st.top == -1){
            cout << "Stack is Empty " << endl;
        }
        else{
            cout << "Stack is not Empty " << endl;
        }
    }


int main() {
    //creation of stack using oops
    Stack st(5);

    push(st,22);
    push(st,35);
    push(st,82);
    push(st,69);
    push(st,15);
    push(st,42);
    cout <<"top"<<st.top<<endl;
    print(st);

    cout << peek(st) << endl;

    pop(st);

    cout << peek(st) << endl;

    pop(st);

    cout << peek(st) << endl;

    pop(st);

    cout << peek(st) << endl;

    if(isEmpty(st)) {
        cout << "Stack is Empty mere dost " << endl;
    }
    else{
        cout << "Stack is not Empty mere dost " << endl;
    }

    //creation of stack using STL
    stack<int>s;

    //push operation
    s.push(2);
    s.push(3);
    s.push(5);

    //pop operation
    s.pop();

    cout << "Stack top element " <<s.top() << endl;
    cout << "size of stack " <<s.size() << endl;

    if(s.empty()) {
        cout<< "stack is empty " << endl;
    }
    else{
        cout << "stack is not empty "<<endl;
    }

    return 0;
}