#include<iostream>
#include<vector>
using namespace std;
//Using Linear Search -> TC : O(n*n) & SC : O(1)
// int missingNum(vector<int>& arr) {
//     int n = arr.size();
//     bool found;
//     for(int i=1; i<=n; i++) {
//         found = false;
//         for(int j=0; j<n; j++) {
//             if(i==arr[j]) {
//                 found = true;
//                 break;
//             }
//         }
//         if(!found)
//         return i;
//     }
//     return -1;
// }

//Using Hashing -> TC : O(n) & SC : O(n)
// int missingNum(vector<int>& arr) {
//     int n = arr.size()+1;
//     vector<int> found(n+1,0);
//     for(int i=0; i<n-1; i++) {
//         found[arr[i]]++;
//     }
//     for(int i=1; i<=n; i++) {
//         if(found[i]==0)
//         return i;
//     }
//     return -1;
// }

// Using Sum of n terms -> TC : O(n) & SC : O(1)
// int missingNum(vector<int>& arr) {
//     int n = arr.size()+1;
//     int ActSum, Sum = 0;
//     for(int i=0; i<n-1; i++) {
//         Sum += arr[i];
//     }
//     ActSum = n*(n+1)/2;
//     return ActSum - Sum;
// }

//Using XOR manipulation -> TC : O(n) & SC : O(1)
int missingNum(vector<int>& arr) {
    int xor1 = 0, xor2 = 0;
    int n = arr.size()+1;
    for(int i=0; i<n-1; i++) {
        xor2 ^= arr[i];
    }
    for(int i=1; i<=n; i++) {
        xor1 ^= i;
    }
    return xor1 ^ xor2;
}
int main() {
    vector<int> arr = {1,2,3,5};
    cout << missingNum(arr);
    return 0;
}