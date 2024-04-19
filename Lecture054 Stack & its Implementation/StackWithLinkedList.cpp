#include<iostream>
using namespace std;

class StackNode {
    public:
    int data;
    StackNode* next;
    StackNode* top;

    StackNode(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

StackNode* push(StackNode* &top, int val) {
        
        StackNode* temp = new StackNode(val);
        //empty list
        if(top == NULL) {
            top = temp;
        }
        else
        {
            temp -> next = top;
            top = temp;
        }
    }

StackNode* pop(StackNode* &top) {
    if(top == NULL) {
        cout << "Stack is empty" << endl;
        return NULL;
    }
    StackNode* temp = top;
    top = top -> next;
    delete temp;
}

void print(StackNode* &top) {
    StackNode* temp = top;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    StackNode* firstNode = new StackNode(2);
    StackNode* top = firstNode;

    push(top, 4);
    push(top, 8);
    push(top, 43);
    push(top, 17);
    push(top, 13);
    pop(top);

    print(top);
}