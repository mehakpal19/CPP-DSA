#include<iostream>
#include<vector>
using namespace std;
//Shifting elements to the right -> TC : O(n) & SC : O(1)
// void rightRotate(vector<int>& arr) {
//     int n = arr.size(), temp = arr[n-1];
//     for(int i=n-1; i>0; i--) {
//         arr[i] = arr[i-1];
//     }
//     arr[0] = temp;
// }

//Two pointer approach -> TC : O(n) & SC : O(1)
void rightRotate(vector<int>& arr) {
    int st=0,end=arr.size()-1;
    while(st<end) {
        swap(arr[st],arr[end]);
        st++;
    }
}
int main() {
    vector<int> arr = {10,20,30,40,50};
    rightRotate(arr);
    for(int val : arr) {
        cout << val << " ";
    }
    return 0;
}