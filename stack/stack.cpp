#include<iostream>
#include<stack>
#include<queue>
#include<unordered_map>
#include<vector>
#include<list>
using namespace std;
class Stack {       
    vector<int> v; //Implementation using dynamic vector
    public:
    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        v.pop_back();
    }

    int top() {
        if(v.size()==0)
        return -1;
        return v[v.size()-1];
    }

    bool isEmpty() {
        return v.size()==0;
    }
};

// class Stack{
//     list<int> l;        //Implementation using linked list
//     public:
//     void push(int val) {
//         l.push_front(val);
//     }
//     void pop() {
//         l.pop_front();
//     }
//     int top() {
//         if(l.size()==0)
//         return -1;
//         return l.front();
//     }
//     bool isEmpty() {
//         return l.size()==0;
//     }
// };


int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    // Stack s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // while(!s.isEmpty()) {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    // cout << endl;

    return 0;
}