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

class List{
    Node* head;
    Node* tail;
    public:
    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if(head==NULL) {
            head = tail = newNode;
            return ;
        }
        newNode->next = head;
        head = newNode;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if(head==NULL) {
            head = tail = newNode;
            return ;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop_front() {
        if(head==NULL) {
            cout << "List is empty" << endl;
            return ;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back() {
        if(head==NULL) {
            cout << "List is empty" << endl;
            return ;
        }
        Node *temp = head;
        while(temp->next!=tail) {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int val, int pos) {
        if(pos<0) {
            cout << "Invalid Position" << endl;
            return ;
        }
        if(pos==0) {
            push_front(val);
            return ;
        }
        int i=0;
        Node *temp = head;
        while(i<pos-1) {
            if(temp==NULL) {
                cout << "Invalid Position" << endl;
            }
            temp = temp->next;
        }
        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void printLL() {
        if(head==NULL) {
            cout << "List is empty" << endl;
            return ;
        }
        Node *temp = head;
        while(temp!=NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int search(int key) {
        Node* temp = head;
        int idx = 0;
        while(temp!=NULL) {
            if(temp->data==key) {
                return idx;
            }
            idx++;
            temp = temp->next;
        }
        return -1;
    }

    //Middle of a linked list
    Node* middle(Node* head) {
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL && fast->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    //Merge two sorted list
    Node* Merge(Node* head1, Node* head2) {
        if(head1==NULL || head2==NULL) {
            return head1==NULL ? head2:head1;
        }
        if(head1->data <= head2->data) {
            head1->next = Merge(head1->next,head2);
            return head1;
        }
        else {
            head2->next = Merge(head1,head2->next);
            return head2;
        }
    }

    //Detect Cycle in a List
    bool hasCycle(Node* head) {
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL && fast->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }

    //Detect cycle and return the pointer of that cycle
    Node* hasCyclePointer(Node* head) {
        Node* slow = head;
        Node* fast = head;
        bool Cycle = false;
        while(fast!=NULL && fast->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast) {
                Cycle = true;
                break;
            }
        }
        slow = head;
        while(slow!=fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }

    //Remove Cycle from the list
    void RemoveCycle(Node* head) {
        Node* slow = head;
        Node* fast = head;
        bool Cycle = false;
        while(fast!=NULL && fast->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast) {
                Cycle = true;
                break;
            }
        }
        slow = head;
        Node* prev;
        while(slow!=fast) {
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL;
    }

};

int main() {
    List ll;
    ll.push_front(2);
    ll.push_front(4);
    ll.push_front(8);
    ll.push_back(10);
    ll.printLL();
    ll.pop_back();
    ll.pop_front();
    ll.printLL();
    ll.insert(6,1);
    ll.printLL();
    cout << ll.search(2) << endl;
    cout << ll.search(3) << endl;
    return 0;
}