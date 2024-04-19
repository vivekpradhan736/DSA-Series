#include<iostream>
#include<stack>
using namespace std;

class Node {
    public:
    int index;
    Node* next;

    Node(int x){
        index = x;
        next = NULL;
    }
};

class NStack {
    public:
    stack<int>st;
    int *arr;
    Node **Top;

    NStack(int N, int S){
        arr = new int[S];
        Top = new Node*[N];
        for(int i = 0; i < N; i++){
            Top[i] = NULL;
        }
        for(int i = 0; i < S; i++){
            st.push(i);
        }
    }

    bool push(int x, int m) {
        if(st.empty()){
            cout << "Stack Overflow" << endl;
            return false;
        }

        arr[st.top()] = x;
        Node* temp = new Node(st.top());
        temp->next = Top[m-1];
        Top[m-1] = temp;
        st.pop();
        return true;
    }

    int pop(int m) {
        if(Top[m-1] == NULL){
            cout << "Stack Underflow" << endl;
            return -1;
        }

        int element = arr[Top[m-1]->index];
        Top[m-1] = Top[m-1]->next;
        st.push(Top[m-1]->index);
        return element;
    }
};

int main() {
    NStack s(3, 9);
    s.push(1, 1);
    s.push(2, 1);
    s.push(3, 1);
    s.push(4, 2);
    s.push(5, 2);
    s.push(6, 2);
    s.push(7, 2);
    s.push(8, 3);
    s.push(9, 3);
    s.pop(3);
}