#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
//Remove Duplicates from an unsorted array by using hashing -> TC : O(n) & SC : O(n)
// int removeDup(vector<int>& arr) {
//     unordered_set<int> s;
//     int idx = 0;
//     for(int i=0; i<arr.size(); i++) {
//         if(s.find(arr[i])==s.end()) {
//             s.insert(arr[i]);
//             arr[idx++] = arr[i];                // arr[idx] = arr[i];
//                                                 // idx++;
//         }
//     }
//     return s.size();
// }

//Remove Duplicates from a sorted array -> TC : O(n) & SC : O(1)
int removeDup(vector<int>& arr) {
    int idx = 1;
    for(int i=1; i<arr.size(); i++) {
        if(arr[i-1]!=arr[i]) {
            arr[idx] = arr[i];
            idx++;
        }
    }
    return idx;
}

int main() {
    vector<int> arr = {10,10,20,20,20,30,40,40,50};
    int n = removeDup(arr);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}