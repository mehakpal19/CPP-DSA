#include<iostream>
#include<vector>
using namespace std;
// PROBLEM : LARGEST ELEMENT INSIDE AN ARRAY

//Iterative Approach -> TC = O(n) & SC = O(1)
// int largest(vector<int>& arr) {     
//     int l = arr[0];
//     for(int i=1; i<arr.size(); i++) {
//         if(arr[i]>l)
//         l = arr[i];
//     }
//     return l;
// }

//Recursive Approach -> TC = O(n) & SC = O(n)
int largest(vector<int>& arr, int i) {
    if(i==arr.size()-1)
    return arr[i];
    int recMax = largest(arr,i+1);
    return max(recMax,arr[i]);
}
int main() {
    vector<int> arr = {3,0,8,2,5};
    cout << largest(arr,0);
    return 0;
}