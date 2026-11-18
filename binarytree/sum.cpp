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


int sum_Nodes(Node* root) {
    if(root==NULL) return 0;
    int ls = sum_Nodes(root->left);
    int rs = sum_Nodes(root->right);
    return ls+rs+root->data;
}

int main() {
    // vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    // Node* root = buildTree(preorder);
    
   
    // cout << "Sum of the binary tree : " << sum_Nodes(root) << endl;
    return 0;
}