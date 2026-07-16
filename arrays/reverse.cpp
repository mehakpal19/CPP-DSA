#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Using temporary array -> TC : O(n) & SC : O(n)
// void Rev(vector<int>& arr) {
//     int n = arr.size();
//     vector<int> temp(n);
//     for(int i=0; i<n; i++) {
//         temp[i] = arr[n-i-1];
//     }
//     for(int i=0; i<n; i++) {
//         arr[i] = temp[i];
//     }
// }

//Using two pointer approach -> TC : O(n) & SC : O(1)
// void Rev(vector<int>& arr) {
//     int st = 0, end = arr.size()-1;
//     while(st<end) {
//         swap(arr[st],arr[end]);
//         st++,end--;
//     }
// }

//Using single pointer -> TC : O(n) & O(1)
// void Rev(vector<int>& arr) {
//     int n = arr.size();
//     for(int i=0; i<n/2; i++) {
//         swap(arr[i],arr[n-i-1]);
//     }
// }

//Using inbuilt function -> TC : O(n) & SC : O(1)
void Rev(vector<int>& arr) {
    reverse(arr.begin(),arr.end());
}
int main() {
    vector<int> arr = {10,20,30,40,50};
    for(int val : arr) {
        cout << val << " ";
    }
    Rev(arr);
    cout << endl;
    for(int val : arr) {
        cout << val << " ";
    }
    return 0;
}