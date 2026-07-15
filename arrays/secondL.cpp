#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
// PROBLEM : SECOND LARGEST ELEMENT INSIDE AN ARRAY
//Using Sorting -> TC = O(n log n) & SC = O(1)
// int secondLargest(vector<int>& arr) {
//     int n = arr.size();
//     sort(arr.begin(), arr.end());
//     for(int i=n-2; i>=0; i--) {
//         if(arr[i]!=arr[n-1])
//         return arr[i];
//     }
//     return -1;
// }

//Using Two Pass Search -> TC = O(n) & SC = O(1)
int secondLargest(vector<int>& arr) {
    int largest = INT_MIN, SL = INT_MIN;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i]>largest)
        largest = arr[i];
    }
    for(int i=0; i<arr.size(); i++) {
        if(arr[i]>SL && arr[i]!=largest)
        SL = arr[i];
    }
    return SL;
}
int main() {
    vector<int> arr = {3,0,8,2,5};
    cout << secondLargest(arr);
    return 0;
}