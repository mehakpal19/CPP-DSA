#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

int count_Nodes(Node* root) {
    if(root==NULL) return 0;
    int lc = count_Nodes(root->left);
    int rc = count_Nodes(root->right);
    return lc+rc+1;
}

int main() {
    // vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    // Node* root = buildTree(preorder);
    
    // cout << "Count of the binary tree : " << count_Nodes(root) << endl;
    return 0;
}