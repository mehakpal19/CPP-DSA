#include<iostream>
#include<vector>
using namespace std;
// using two traversal -> TC : O(n) & SC : O(1)
// void pushZeroes(vector<int>& arr) {
//     int idx = 0;
//     for(int i=0; i<arr.size(); i++) {
//         if(arr[i]!=0) {
//             arr[idx++] = arr[i];
//         }
//     }
//     while(idx<arr.size()) {
//         arr[idx++] = 0;
//     }
// }

// using one traversal -> TC : O(n) & SC : O(1)
void pushZeroes(vector<int>& arr) {
    int idx = 0;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i]!=0) {
            swap(arr[idx],arr[i]);
            idx++;
        }
    }
}
int main() {
    vector<int> arr = {1,0,2,3,0,4,0};
    pushZeroes(arr);
    for(int val : arr) {
        cout << val << " ";
    }
    return 0;
}