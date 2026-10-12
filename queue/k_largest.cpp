#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int kthLargest(vector<int>& arr, int k) {
    priority_queue<int,vector<int>,greater <int>> pq;
    for(int x : arr) {
        pq.push(x);
        if(pq.size()>k) {
            pq.pop();
        }
    }
    return pq.top();
}

int main() {
    vector<int> arr = {3,2,3,1,2,4,5,5,6};
    cout << kthLargest(arr,4);
    return 0;
}