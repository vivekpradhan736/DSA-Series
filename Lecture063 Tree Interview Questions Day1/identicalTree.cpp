#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* buildTree(Node* root){
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

bool isIdentical(Node *r1, Node *r2){
    if(r1 == NULL && r2 == NULL){
        return true;
    }

    if(r1 == NULL && r2 != NULL){
        return false;
    }
    if(r1 != NULL && r2 == NULL){
        return false;
    }

    bool left = isIdentical(r1->left, r2->left);
    bool right = isIdentical(r1->right, r2->right);

    // bool value = r1->data == r2->data;

    if(left && right){
        return true;
    }
    else {
        return false;
    }
}

int main() {
    Node* root1 = NULL;
    Node* root2 = NULL;
    root1 = buildTree(root1);
    root2 = buildTree(root2);

    if(isIdentical(root1, root2)){
        cout<<"true";
    }
    else {
        cout<<"false";
    }
}