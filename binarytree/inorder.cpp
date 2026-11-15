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

void inOrder(Node* root) {
    if(root==NULL) return ;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main() {
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    // Node* root = buildTree(preorder);
    // inOrder(root);
    cout << endl;
    return 0;
}