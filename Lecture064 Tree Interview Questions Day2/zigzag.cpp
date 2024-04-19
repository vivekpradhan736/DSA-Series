#include<iostream>
#include<vector>
#include<stack>
#include<queue>
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

vector<int> zigZagTraversalFirst(Node* root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }

    stack<Node*> s1;
    stack<Node*> s2;

    s1.push(root);

    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            Node* temp = s1.top();
            s1.pop();
            ans.push_back(temp->data);

            if(temp->left){
                s2.push(temp->left);
            }
            if(temp->right){
                s2.push(temp->right);
            }
        }

        while(!s2.empty()){
            Node* temp = s2.top();
            s2.pop();
            ans.push_back(temp->data);

            if(temp->right){
                s1.push(temp->right);
            }
            if(temp->left){
                s1.push(temp->left);
            }
        }
    }

    return ans;
}

vector <int> zigZagTraversalSecond(Node* root)
    {
    	vector<int> result;
    	if(root == NULL)
    	    return result;
    	
    	queue<Node*> q;
    	q.push(root);
    	
    	bool leftToRight = true;
    	
    	while(!q.empty()) {
    	    
    	    int size = q.size();
    	    vector<int> ans(size);
    	    
    	    //Level Process
    	    for(int i=0; i<size; i++) {
    	        
    	        Node* frontNode = q.front();
    	        q.pop();
    	        
    	        //normal insert or reverse insert 
    	        int index = leftToRight ? i : size - i - 1;
    	        ans[index] = frontNode -> data;
    	        
    	        if(frontNode->left)
    	            q.push(frontNode -> left);
    	            
    	        if(frontNode->right)
    	            q.push(frontNode -> right);
    	    }
    	    
    	    //direction change karni h
    	    leftToRight = !leftToRight;
    	   
    	  for(auto i: ans) {
    	      result.push_back(i);
    	  }  
    	}
        return result;
    }

int main() {
    Node* root = NULL; 
    root = buildTree(root);

    vector<int> ans1 = zigZagTraversalFirst(root);

    for(int i = 0; i < ans1.size(); i++){
        cout << ans1[i] << " ";
    }

    vector<int> ans2 = zigZagTraversalSecond(root);
    for(int i = 0; i < ans2.size(); i++){
        cout << ans2[i] << " ";
    }
    return 0;
}