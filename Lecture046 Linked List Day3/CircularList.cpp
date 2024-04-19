#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertNode(Node *&tail, int element, int d)
{

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list
        // assuming that the element is present in the list

        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found -> curr is representing element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

bool isCircularList(Node* tail) {
    //empty list
    if(tail == NULL) {
        return true;
    }

    Node* temp = tail -> next;
    while(temp != NULL && temp != tail ) {
        temp = temp -> next;
    }

    if(temp == tail ) {
        return true;
    }

    return false;
}

int main(){
    Node *tail = NULL;
    insertNode(tail, 1, 1);
    insertNode(tail, 1, 20);
    insertNode(tail, 1, 30);
    cout << "tail " << tail->data << endl;
    insertNode(tail, 1, 40);
    insertNode(tail, 1, 50);
    insertNode(tail, 1, 60);
    insertNode(tail, 1, 70);
    insertNode(tail, 1, 80);
    insertNode(tail, 1, 90);
    insertNode(tail, 1, 100);

    if(isCircularList(tail)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }
}