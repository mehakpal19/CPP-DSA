#include<iostream>
#include<vector>
using namespace std;
//Shifting elements to the left -> TC : O(n) & SC : O(1)
void leftRotate(vector<int>& arr) {
    int n = arr.size(), temp = arr[0];
    for(int i=1; i<n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}
int main() {
    vector<int> arr = {10,20,30,40,50};
    leftRotate(arr);
    for(int val : arr) {
        cout << val << " ";
    }
    return 0;
}