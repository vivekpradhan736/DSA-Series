#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* buildTree(Node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void find(Node *root, int pos, int &l, int &r){
    if(!root){
        return;
    }

    l = min(l, pos);
    r = max(r, pos);

    find(root->left, pos-1, l, r);
    find(root->right, pos+1, l, r);
}

vector<int> verticalOrder(Node *root){
    int l = 0, r = 0;
    find(root, 0, l, r);

    //Positive
    vector<vector<int>>Positive(r+1);
    //Negative
    vector<vector<int>>Negative(abs(l)+1);

    queue<Node*>q;
    q.push(root);
    queue<int>index;
    index.push(0);

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        int pos = index.front();
        index.pop();

        if(pos>=0){
            Positive[pos].push_back(temp->data);
        }
        else{
            Negative[abs(pos)].push_back(temp->data);
        }

        //left
        if(temp->left){
            q.push(temp->left);
            index.push(pos-1);
        }
        //right
        if(temp->right){
            q.push(temp->right);
            index.push(pos+1);
        }
    }

    cout<<"Negative size: "<<Negative[2].size()<<endl;

    vector<int>ans;
    for(int i = Negative.size()-1; i>0; i--){
        for(int j=0; j<Negative[i].size(); j++){
            ans.push_back(Negative[i][j]);
        }
    }

    for(int i = 0; i<Positive.size(); i++){
        for(int j=0; j<Positive[i].size(); j++){
            ans.push_back(Positive[i][j]);
        }
    }
    return ans;
}

int main() {
    Node* root = NULL;
    root = buildTree(root);

    vector<int> ans = verticalOrder(root);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}