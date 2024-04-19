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

Node* insertAtTail(Node* &head, Node* &tail, int val) {
        
        Node* temp = new Node(val);
        //empty list
        if(head == NULL) {
            head = temp;
            tail = temp;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
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

Node* reverse(Node* head){
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

Node* add(Node* first, Node* second){
    int carry = 0;

    Node* ansHead = NULL;
    Node* ansTail = NULL;
        
        while(first != NULL || second != NULL || carry != 0) {
            
            int val1 = 0;
            if(first != NULL)
                val1 = first -> data;
                
            int val2 = 0;
            if(second !=NULL)
                val2 = second -> data;
            
            
            int sum = carry + val1 + val2;
            
            int digit = sum%10;
            
            //create node and add in answer Linked List
            insertAtTail(ansHead, ansTail, digit);
            
            carry = sum/10;
            if(first != NULL)
                first = first -> next;
            
            if(second != NULL)
                second = second -> next;
        }
        return ansHead;
}

int main() {
    Node* firstNode = new Node(2);
    Node* secondNode = new Node(9);

    Node* firstHead = firstNode;
    Node* firstTail = firstNode;

    Node* secondHead = secondNode;
    Node* secondTail = secondNode;

    insertAtTail(firstHead, firstTail, 9);

    insertAtTail(secondHead, secondTail, 9);
    insertAtTail(secondHead, secondTail, 2);

    print(firstHead);
    print(secondHead);

    //step 1 -  reverse input LL
    Node* first = reverse(firstHead);
    Node* second = reverse(secondHead);

    //step2 - add 2 LL
    Node* ans = add(first, second);

    //step 3 
    ans = reverse(ans);
    print(ans);
}