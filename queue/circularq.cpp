#include<iostream>
using namespace std;
class CircularQ{
    int* arr;
    int cap, currSize;
    int f,r;
    public:
    CircularQ(int size) {
        arr = new int[size];
        cap = size, currSize = 0;
        f = 0, r = -1;
    }

    void enqueue(int val) {
        if(currSize==cap) {
            cout << "Queue is full\n";
            return ;
        }
        r = (r+1)%cap;
        arr[r] = val;
        currSize++;
    }

    void dequeue() {
        if(empty()) {
            cout << "Queue is empty\n";
            return ;
        }
        f = (f+1)%cap;
        currSize--;
    }

    int front() {
        if(empty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[f];
    }

    bool empty() {
        return currSize==0;
    }
};
int main() {
    CircularQ cq(3);
    cq.enqueue(1);
    cq.enqueue(2);
    cq.enqueue(3);
    cq.dequeue();
    cq.enqueue(4);
    while(!cq.empty()) {
        cout << cq.front() << " ";
        cq.dequeue();
    }
    return 0;
}