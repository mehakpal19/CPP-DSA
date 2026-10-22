#include<iostream>
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

class Circularll{
    Node* head;
    Node* tail;
    public:
    Circularll() {
        head = tail = NULL;
    }

    void insertAtBeg(int val) {
        Node* newNode = new Node(val);
        if(head==NULL) {
            head = tail = newNode;
            tail->next = head;
        }
        else {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void print() {
        if(head==NULL) return ;
        Node* temp = head;
        cout << temp->data << " => ";
        temp = temp->next;
        while(temp!=head) {
            cout << temp->data << " => ";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if(head==NULL) {
            head = tail = newNode;
            tail->next = head;
        } else {
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteAtBeg() {
        if(head==NULL) return ;
        if(head==tail) {
            delete head;
            head = tail = NULL;
        }
        else {
            Node *temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }

    void deleteAtEnd() {
        if(head==NULL) return ;
        if(head==tail) {
            delete head;
            head = tail = NULL;
        }
        else {
            Node* temp = tail;
            Node* prev = head;
            while(prev->next!=tail) {
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }

};

int main() {
    Circularll cl;
    cl.insertAtBeg(1);
    cl.insertAtBeg(2);
    cl.insertAtBeg(3);
    cl.print();
    cl.insertAtEnd(4);
    cl.print();
    cl.deleteAtBeg();
    cl.deleteAtEnd();
    cl.print();
    return 0;
}