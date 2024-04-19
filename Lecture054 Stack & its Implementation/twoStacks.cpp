#include<iostream>
#include<stack>
using namespace std;

class TwoStack {
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    // Initialize TwoStack.
    TwoStack(int s) {
        this -> size = s;
        arr = new int[s];
        top1 = -1;
        top2 = s;
    }

    // Push in stack 1.
    void push1(int num){
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num){
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else {
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else {
            return -1;
        }
    }
};

int main() {
    TwoStack st(10);

    // Push some elements into both stacks.
    st.push1(1);
    st.push1(2);
    st.push1(3);
    st.push2(10);
    st.push2(9);

    // Pop some elements from both stacks and print them.
    cout << "Popped from stack 1: " << st.pop1() << endl;
    cout << "Popped from stack 2: " << st.pop2() << endl;

    return 0;
}