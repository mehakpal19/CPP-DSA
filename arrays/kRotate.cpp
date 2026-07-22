#include<iostream>
#include<vector>
using namespace std;
//Recursive Approach -> TC : O(n*k) & SC : O(k)
// void KRotate(vector<int>& arr, int k) {
//     if(k==0) return ;
//     int n = arr.size();
//     int temp = arr[n-1];
//     for(int i=n-1; i>0; i--) {
//         arr[i] = arr[i-1];
//     }
//     arr[0] = temp;
//     KRotate(arr,k-1);
// }

//Index Calculation -> TC : O(n) & SC : O(n)
// void KRotate(vector<int>& arr, int k) {
//     vector<int> res;
//     int n = arr.size();
//     k = k%n;
//     for(int i=0; i<n; i++) {
//         if(i<k)
//         res.push_back(arr[n+i-k]);
//         else 
//         res.push_back(arr[i-k]);
//     }
//     for(int i=0; i<n; i++) {
//         arr[i] = res[i];
//     }
// }

//Reverse Approach -> TC : O(n) & SC : O(1)
void KRotate(vector<int>& arr, int k) {
    int n = arr.size();
    for(int i=n-k, j=n-1; i<j; i++,j--) {
        swap(arr[i],arr[j]);
    }
    for(int i=0, j=n-k-1; i<j; i++,j--) {
        swap(arr[i],arr[j]);
    }
    for(int i=0, j=n-1; i<j; i++,j--) {
        swap(arr[i],arr[j]);
    }
}
int main() {
    vector<int> arr = {10,20,30,40,50,60};
    KRotate(arr,2);
    for(int val : arr) {
        cout << val << " ";
    }
    return 0;
}