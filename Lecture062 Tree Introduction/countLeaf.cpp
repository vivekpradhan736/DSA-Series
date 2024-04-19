#include<iostream>
using namespace std;

class BinaryTreeNode {
      public :
        int data;
        BinaryTreeNode *left;
        BinaryTreeNode *right;

        BinaryTreeNode(int data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };

void inorder(BinaryTreeNode* root, int &count) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left, count);
   	
    //leaf node
    if(root->left == NULL && root->right == NULL) {
        count++;
    }
    
    inorder(root->right, count);

}

int main() {
    int cnt = 0;
    BinaryTreeNode *root = new BinaryTreeNode(1);
    root->data = 1;
    root->left = new BinaryTreeNode(2);
    root->right = new BinaryTreeNode(3);
    root->left->left = new BinaryTreeNode(4);
    root->left->right = new BinaryTreeNode(5);

   /* Constructed binary tree is
            1
          /   \
        2      3
      /  \
    4     5
    */
    inorder(root, cnt);
    cout << cnt << endl;
    return 0;
}