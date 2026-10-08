#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};
class Queue{
    Node* head;
    Node* tail;
    public:
    Queue() {
        head = tail = NULL;
    }

    void enqueue(int val) {
        Node* newNode = new Node(val);
        if(head==NULL) {
            head = tail = newNode;
            return ;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void dequeue() {
        if(head==NULL) {
            cout << "List is empty" << endl;
            return ;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    int front() {
        if(head==NULL) {
            cout << "List is empty" << endl;
            return -1;
        }
        return head->data;
    }

    bool empty() {
        return head==NULL;
    }
};





int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    // Queue q;
    // q.enqueue(1);
    // q.enqueue(2);
    // q.enqueue(3);

    // while(!q.empty()) {
    //     cout << q.front() << " ";
    //     q.dequeue();
    // }
    // cout << endl;

    return 0;
}