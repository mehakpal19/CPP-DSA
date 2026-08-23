#include<iostream>
#include<vector>
using namespace std;
//Bruteforce approach -> TC : O(n*n) & SC : O(1)
// vector<int> product(vector<int>& arr) {
//     vector<int> ans;
//     int p;
//     for(int i=0; i<arr.size(); i++) {
//         p = 1;
//         for(int j=0; j<arr.size(); j++) {
//             if(i!=j) {
//                 p *= arr[j];
//             }
//         }
//         ans.push_back(p);
//     }
//     return ans;
// }

//Prefix & Suffix -> TC : O(n) & SC : O(n)
// vector<int> product(vector<int>& arr) {
//     int n = arr.size();
//     vector<int> left(n,1), right(n,1), ans(n);
//     for(int i=1; i<n; i++) {
//         left[i] = left[i-1] * arr[i-1];
//     }
//     for(int i=n-2; i>=0; i--) {
//         right[i] = right[i+1] * arr[i+1];
//     }
//     for(int i=0; i<n; i++) {
//         ans[i] = left[i] * right[i];
//     }
//     return ans;
// }

//Division operator -> TC : O(n) & SC : O(1)
//Problems - product variable may overflow & 0 is present as a element
// vector<int> product(vector<int>& arr) {
//     vector<int> ans(arr.size());
//     int p = 1;
//     for(int i=0; i<arr.size(); i++) {
//         p *= arr[i];
//     }
//     for(int i=0; i<arr.size(); i++) {
//         ans[i] = p/arr[i];
//     }
//     return ans;
// }

//Optimized Solution -> TC : O(n) & SC : O(1)
vector<int> product(vector<int>& arr) {
    int n = arr.size();
     vector<int> ans(n,1);
     for(int i=1; i<n; i++) {
        ans[i] = ans[i-1] * arr[i-1];
    }
    int suffix = 1;
    for(int i=n-1; i>=0; i--) {
        ans[i] *= suffix;
        suffix *= arr[i];
    }
    return ans;
}
int main() {
    vector<int> arr = {10,3,5,6,2};
    vector<int> ans = product(arr);
    for(int val : ans) {
        cout << val << " ";
    }
    return 0;
}