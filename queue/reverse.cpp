#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;


//reverse a queue using recursion
void reverse_q(queue<int>& q) {
    if(q.empty()) return ;
    int x = q.front();
    q.pop();
    reverse_q(q);
    q.push(x);

}

//Reverse a queue using stack
void reverse_Q(queue<int>& q) {
    stack<int> s;
    while(!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    // reverse_Q(q);
    reverse_q(q);
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}