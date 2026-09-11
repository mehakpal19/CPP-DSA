#include<iostream>
#include<vector>
using namespace std;
//Iterative Approach -> TC : O(n) & SC : O(1)
// vector<int> findOccurrences(vector<int>& arr, int x) {
//     int first = -1, last = -1;
//     for(int i=0; i<arr.size(); i++) {
//         if(arr[i]!=x)
//         continue;
//         if(first==-1)
//         first = i;
//         last = i;
//     }
//     vector<int> res = {first,last};
//     return res;
// }

//Two Pass Binary Search -> TC : O(log n) & SC : O(1)
int firstOccurrences(vector<int>& arr, int x) {
    int first = -1, st = 0, end = arr.size()-1;
    while(st<=end) {
        int mid = st+(end-st)/2;
        if(arr[mid]==x) {
            first = mid;
            end = mid-1;
        }
        else if(arr[mid]>x)
        end = mid-1;
        else
        st = mid+1;
    }
    return first;
}

int lastOccurrences(vector<int>& arr, int x) {
    int last = -1, st = 0, end = arr.size()-1;
    while(st<=end) {
        int mid = st+(end-st)/2;
        if(arr[mid]==x) {
            last = mid;
            st = mid+1;
        }
        else if(arr[mid]>x)
        end = mid-1;
        else
        st = mid+1;
    }
    return last;
}

vector<int> findOccurrences(vector<int>& arr, int x) {
    int first = firstOccurrences(arr,x);
    int last = lastOccurrences(arr,x);
    vector<int> res = {first,last};
    return res;
}
int main() {
    vector<int> arr = {1,2,5,5,5,6};
    vector<int> res = findOccurrences(arr,5);
    for(int val : res) {
        cout << val << " ";
    }
    return 0;
}