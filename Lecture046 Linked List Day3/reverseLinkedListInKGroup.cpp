#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

void insertAtTail(Node* &tail, int d) {

    // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

Node* kReverse(Node* head, int k){
    //base case
    if(head == NULL) {
        return NULL;
    }

    //step1: reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while(curr != NULL && count < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    //step2: Recursion dekhlega aage ka
    if(next != NULL) {
        head -> next = kReverse(next, k);
    }

    //step3: return head of reversed list
    return prev;
}

int main(){
    Node* node1 = new Node(4);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 3);
    insertAtTail(tail, 8);
    insertAtTail(tail, 23);
    insertAtTail(tail, 43);
    insertAtTail(tail, 39);

    print(head);
    cout<<"head: "<<head->data<<endl;

    Node* reverse = kReverse(head, 2);
    print(reverse);
}