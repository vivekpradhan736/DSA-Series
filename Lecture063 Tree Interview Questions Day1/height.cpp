#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *left;
    Node *right;

    //constructor
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
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

int heightTree(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftHeight = heightTree(root->left);
    int rightHeight = heightTree(root->right);

    return max(leftHeight, rightHeight) + 1;

}

int main() {
    Node* root = NULL;
    root = buildTree(root);

    cout << "Height of the tree is: " << heightTree(root) << endl;
}