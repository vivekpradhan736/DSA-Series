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
    ~Node() {
        int value = this -> data;
        cout << "Deleting Node with data " << data << endl;
        if(this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
    }
};

void insertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {

    // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d) {

    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* &head, Node* &tail) {

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;
        return;
    }
    else {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        //if the linked list is empty
        if(!curr) return;

        //deleting at Last Position
        if(curr -> next == NULL) {
            prev -> next = NULL;
            tail = prev;
            delete curr;
            return;
        }

        //removing the link to the node to be deleted
        prev -> next = curr -> next;
        //free memory of the node being deleted
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(10);
    Node* node2 = new Node(34);
    cout << node1->data << endl;
    cout << node1->next << endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);

    insertAtTail(tail, 70);
    insertAtTail(tail, 80);
    insertAtTail(tail, 90);

    insertAtPosition(head, tail, 4, 22);
    insertAtPosition(head, tail, 1, 2);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    deleteNode(9, head, tail);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
}