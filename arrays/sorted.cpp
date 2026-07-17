#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Using Iterative Approach -> TC : O(n) and SC : O(1)
// bool isSorted(vector<int>& arr) {
//     for(int i=1; i<arr.size(); i++) {
//         if(arr[i-1]>arr[i])
//         return false;
//     }
//     return true;
// }

//Using Recursive Approach -> TC : O(n) & SC : O(n)
// bool isSorted(vector<int>& arr, int n) {
//     if(n<=1) return true;
//     if(arr[n-1]<arr[n-2])
//     return false;
//     return isSorted(arr,n-1);
// }

//Using inbuilt function -> TC : O(n) & SC : O(1)
bool isSorted(vector<int>& arr) {
    return is_sorted(arr.begin(), arr.end());
}
int main() {
    vector<int> arr = {1,3,2,4,5};
    cout << isSorted(arr);
    return 0;
}