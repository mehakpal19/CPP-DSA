#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* mergek(vector<Node*>& lists) {
    if(lists.size()==0)
    return NULL;
    Node* head = new Node(-1);
    Node* temp = head;
    priority_queue<pair<int,Node*>,vector<pair<int,Node*>>,greater<pair<int,Node*>>> pq;
    for(auto x : lists) {
        if(x!=NULL)
        pq.push({x->data,x});
    }
    while(!pq.size()) {
        Node* min = pq.top().second;
        pq.pop();
        if(min->next != NULL)
        pq.push({min->next->data,min->next});
        temp->next = min;
        temp = temp->next;
    }
    return head->next;
}