#include<iostream>
#include<vector>
using namespace std;
//Linear Search -> TC : O(n) & SC : O(1)
// int sorted_rotated(vector<int>& arr, int x) {
//     for(int i=0; i<arr.size(); i++) {
//         if(arr[i]==x)
//         return i;
//     }
//     return -1;
// }

//Binary Search -> TC : O(log n) & SC : O(1)
int sorted_rotated(vector<int>& arr, int x) {
    int st = 0, end = arr.size()-1;
    while(st<=end) {
        int mid = (st+end)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>arr[st]) {
            if(x>=arr[st] && x<arr[mid])
            end = mid-1;
            else
            st = mid+1;
        }
        else {
             if(x<=arr[end] && x>arr[mid])
             st = mid+1;
             else 
             end = mid-1;
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {4,5,6,7,0,1,2};
    cout << sorted_rotated(arr,0);
    return 0;
}