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

Node* sortLinkedList(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return head;

    Node *sorted = nullptr;
    Node *current = head;
    while (current != nullptr) {
        Node *next = current->next;
        if (sorted == nullptr || current->data < sorted->data) {
            current->next = sorted;
            sorted = current;
        } else {
            Node *temp = sorted;
            while (temp->next != nullptr && temp->next->data < current->data) {
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }
        current = next;
    }
    return sorted;
}

Node* uniqueUnSortedList(Node* head) {
    //empty List
    if(head == NULL)
      return NULL;

    //non empty list
    Node* curr = head;

    while(curr != NULL) {
        Node* temp = curr -> next;
        Node* prev = curr;

        while(temp != NULL) {
            if(temp -> data == curr -> data) {
                Node* deleteNode = temp;
                prev->next = temp->next;
                temp = temp->next;
                delete(deleteNode);

            }
            else {
                prev = temp;
                temp = temp -> next;
            }
        }
        curr = curr -> next;
    }
    return head;
}

int main() {
    Node* node1 = new Node(7);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 4);
    insertAtTail(tail, 7);
    insertAtTail(tail, 7);
    insertAtTail(tail, 3);
    insertAtTail(tail, 4);
    insertAtTail(tail, 3);
    print(head);

    Node* newList = uniqueUnSortedList(head);
    print(newList);

    head = sortLinkedList(head);
    cout << "Sorted List: ";
    print(head);

    return 0;
}