#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int val) {
    if(root==NULL) return new Node(val);
    if(val<root->data)
    root->left = insert(root->left,val);
    else
    root->right = insert(root->right,val);
    return root; 
}

Node* buildTree(vector<int>& v) {
    Node* root = NULL;
    for(int val : v) {
        root = insert(root,val);
    }
    return root;
}

void inOrder(Node* root) {
    if (root==NULL) return ;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

//Get inorder successor 
Node* getInorder(Node* root) {
    while(root!=NULL && root->left!=NULL) {
        root = root->left;
    } 
    return root;
}

Node* deleteN(Node* root, int key) {
    if(root==NULL) return NULL;
    if(key<root->data) 
    root->left = deleteN(root->left,key);
    else if(key>root->data)
    root->right = deleteN(root->right,key);
    else {
        if(root->left==NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else {
            Node* IS = getInorder(root->right);
            root->data = IS->data;
            root->right = deleteN(root->right,IS->data);
        }
    }
    return root;
}

bool isValid(Node* root, Node* min, Node* max) {
    if(root==NULL) return true;
    if(min!=NULL && root->data<=min->data) return false;
    if(max!=NULL && root->data>=max->data) return false;
    return isValid(root->left,min,root) && isValid(root->right,root,max);
}

//Sorted array to balanced BST
Node* sortedA_BST(vector<int>& a, int st, int end) {
    if(st>end) return NULL;
    int mid = (st+end)/2;
    Node* root = new Node(a[mid]);
    root->left = sortedA_BST(a,st,mid-1);
    root->right = sortedA_BST(a,mid+1,end);
    return root;
}

//Kth smallest element
int Order = 0;
int Ksmallest(Node* root, int k) {
    if(root==NULL) return -1;
    if(root->left!=NULL) {
        int leftAns = Ksmallest(root->left,k);
        if(leftAns!=-1) return leftAns;
    }
    if(Order+1==k) return root->data;
    Order += 1;
    if(root->right!=NULL) {
        int rightAns = Ksmallest(root->right,k);
        if(rightAns!=-1) return rightAns;
    }
    return -1;
}

Node* LCA(Node* root, Node* p, Node* q) {
    if(root==NULL) return NULL;
    if(root->data>p->data && root->data>q->data)
    return LCA(root->left,p,q);
    else if(root->data<p->data && root->data<q->data)
    return LCA(root->right,p,q);
    else return root;
}

int main() {
    vector<int> v = {3,2,1,5,4,6};
    Node* root = buildTree(v);
    inOrder(root);
    cout << endl;
    root = deleteN(root,5);
    inOrder(root);
    cout << endl;
    cout << isValid(root,NULL,NULL) << endl;

    vector<int> a = {-10,-3,0,5,9};
    Node* sortedRt = sortedA_BST(a,0,a.size()-1);
    inOrder(sortedRt);
    cout << endl;
    cout << Ksmallest(sortedRt,4);

    return 0;
}