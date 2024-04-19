#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

vector<int> leftView(Node *root)
{
    queue<Node *> q;
    q.push(root);
    vector<int> ans;

    if (root == NULL)
        return ans;

    while (!q.empty())
    {
        int n = q.size();
        ans.push_back(q.front()->data);
        while (n--)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return ans;
}

vector<int> leftViewRecursion(Node *root, int level, vector<int> &ans){
    if (root == NULL)
        return ans;
    
    if(level == ans.size()){
        ans.push_back(root->data);
    }
    leftViewRecursion(root->left, level+1, ans);
    leftViewRecursion(root->right, level+1, ans);

    return ans;
}



int main()
{
    Node *root = NULL;
    root = buildTree(root);

    // vector<int> ans = leftView(root);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    vector<int> ans2;
    vector<int> ans3 = leftViewRecursion(root, 0, ans2);
    for (int i = 0; i < ans3.size(); i++)
    {
        cout << ans3[i] << " ";
    }
}