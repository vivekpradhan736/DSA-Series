#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    //constructor
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

Node* reverseLinkedListByIterative(Node* head){
    if(head == NULL || head -> next == NULL) {
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL) {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

void reverse(Node* &head, Node* curr, Node* prev) {

    //base case
    if(curr == NULL) {
        head = prev;
        return;
    }

    Node* forward = curr -> next;

    reverse(head, forward, curr);
    curr -> next = prev;
}

Node* reverseLinkedListByRecursive(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);
    return head;
}

Node* reverseLinkedListByRecursive2(Node* head) {
     //base case
     if(head == NULL || head -> next == NULL) {
         return head;
     }

     Node* chotaHead = reverseLinkedListByRecursive2(head -> next);
     head -> next -> next = head;
     head -> next = NULL;
     return chotaHead;
}

int getLength(Node* head) {
    int len = 0;
    while(head != NULL) {
        len++;
        head = head -> next;
    }
    return len;
}

Node* findMiddle1(Node* head) {
    int len = getLength(head);
    int ans = (len/2);

    Node* temp = head;
    int cnt = 0;
    while(cnt < ans) {
        temp = temp -> next;
        cnt++;
    }
    return temp;
}

Node* getMiddle2(Node* head) {
    //for 0 or 1 node
    if(head == NULL || head -> next == NULL)
       return head;
    
    //for 2 nodes
    if(head -> next -> next == NULL) {
        return head -> next;
    }

    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL) {
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    return slow;
}

Node* findMiddle2(Node* head) {
    return getMiddle2(head);
}

int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail, 3);
    insertAtTail(tail, 8);
    insertAtTail(tail, 23);
    insertAtTail(tail, 43);
    insertAtTail(tail, 39);

    print(head);
    cout<<"head"<<head->data<<endl; 

    Node* reverseIterative = reverseLinkedListByIterative(head);
    cout<<"head"<<head->data<<endl;
    print(reverseIterative);

    Node* reverseRecursive = reverseLinkedListByRecursive(head);
    cout<<"head"<<head->data<<endl;
    print(reverseRecursive);

    Node* reverseRecursive2 = reverseLinkedListByRecursive2(head);
    cout<<"head"<<head->data<<endl;
    print(reverseRecursive2);

    cout<<"middle1: "<<findMiddle1(head)->data<<endl;

    cout<<"middle2: "<<findMiddle2(head)->data<<endl;
}