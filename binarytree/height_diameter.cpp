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

int ans = 0;
int height(Node* root) {
    if(root==NULL) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    ans = max(ans,lh+rh);  //Extra line for calculating the diameter of the tree
    return max(lh,rh)+1;
}

int diameter(Node* root) {
    height(root);
    return ans;
}

int main() {
    // vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    // Node* root = buildTree(preorder);
    // cout << "Height of the binary tree : " << height(root) << endl;
    // cout << "Diameter of the binary tree : " << diameter(root) << endl;
    return 0;
}