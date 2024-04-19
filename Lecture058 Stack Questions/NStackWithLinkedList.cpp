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
    int n;
    Node* head;
    Node* tail;
    stack<Node*> freeList;

    NStack(int n) {
        this -> n = n;
        head = NULL;
        tail = NULL;
    }

    void push(int x) {
        if(freeList.empty()) {
            Node* temp = new Node(x);
            if(head == NULL) {
                head = temp;
                tail = temp;
            }
            else {
                tail -> next = temp;
                tail = temp;
            }
        }
        else {
            Node* temp = freeList.top();
            freeList.pop();
            temp -> index = x;
            if(head == NULL) {
                head = temp;
                tail = temp;
            }
            else {
                tail -> next = temp;
                tail = temp;
            }
        }
    }

    void pop() {
        if(head == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        freeList.push(temp);
    }

    int top() {
        if(head == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return head -> index;
    }
};

int main() {
    NStack s(3);
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    return 0;
}