#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
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

int height(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int leftHeight = height(root -> left);
    int rightHeight = height(root -> right);

    return max(leftHeight, rightHeight) + 1;
}

int diameter(Node* root) { //Time Complexity: O(n^2)
    if(root == NULL){
        return 0;
    }

    int opt1 = diameter(root->left);
    int opt2 = diameter(root->right);
    int opt3 = height(root->left) + height(root->right) + 1;

    return max(opt1, max(opt2, opt3));
}

pair<int, int> diameterFast(Node* root){ //Time complexity: O(n)
    if(root == NULL) {
        pair<int, int> p = make_pair(0,0);
        return p;
    }

    pair<int, int> left = diameterFast(root -> left);
    pair<int, int> right = diameterFast(root -> right);

    int opt1 = left.first;
    int opt2 = right.first;
    int opt3 = left.second + right.second + 1;

    pair<int, int> ans;
    ans.first = max(opt1, max(opt2, opt3));
    ans.second = max(left.second, right.second) + 1;

    return ans;
}

int main() {
    Node* root = NULL;
    root = buildTree(root);

    cout << "Diameter of the tree is: " << diameter(root) << endl;

    cout << "Fast Diameter of the tree is: " << diameterFast(root).first << endl;
}