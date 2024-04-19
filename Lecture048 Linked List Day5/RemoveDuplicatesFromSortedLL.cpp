#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    // ~Node() {
    //     int value = this -> data;
    //     cout << "Deleting Node with data " << data << endl;
    //     if(this -> next != NULL) {
    //         delete next;
    //         this -> next = NULL;
    //     }
    // }
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

Node* uniqueSortedList(Node* head) {
    //empty List
    if(head == NULL)
      return NULL;

    //non empty list
    Node* curr = head;

    while(curr != NULL) {
        
        if(curr -> next != NULL && curr -> data == curr -> next -> data) {
          Node* next_next = curr -> next -> next;
          delete curr -> next;
          curr -> next = next_next;
        }
        else { //not equal
            curr = curr -> next;
        }
    }
    return head;
}

int main() {
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 2);
    insertAtTail(tail, 2);
    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    insertAtTail(tail, 4);
    insertAtTail(tail, 4);
    print(head);

    Node* newList = uniqueSortedList(head);
    print(newList);
}