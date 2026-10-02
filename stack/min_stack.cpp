#include<iostream>
#include<stack>
using namespace std;
//SC : O(2*n)
// class MinStack {
//     public:
//     stack<pair<int,int>> s;
//     void push(int val) {
//         if(s.empty()) {
//             s.push({val,val});
//         }
//         else {
//             int minVal = min(val,s.top().second);
//             s.push({val,minVal});
//         }
//     }
//     void pop() {
//         s.pop();
//     }
//     int top() {
//         return s.top().first;
//     }
//     int getMin() {
//         return s.top().second;
//     }
// };



//SC : O(n)
class MinStack{
    public:
    stack<int> s;
    long long int minVal;
    void push(int val) {
        if(s.empty()) {
            s.push(val);
            minVal = val;
        }
        else{
            if(val<minVal) {
                s.push((long long)2*val-minVal);
                minVal = val;
            }
            else {
                s.push(val);
            }
        }
    }

    void pop() {
        if(s.top()<minVal) {
            minVal = 2*minVal - s.top();
        }
        s.pop();
    }

    int top() {
        if(s.top()<minVal) {
            return 2*minVal - s.top();
        }
        return s.top();
    }

    int getMin() {
        return minVal;
    }
};


int main() {
    MinStack s;
    s.push(-2);
    s.push(0);
    s.push(-3);
    cout << s.getMin() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.getMin() << endl;
    return 0;
}