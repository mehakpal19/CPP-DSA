#include<iostream>
#include<vector>
using namespace std;
bool binarySearch(vector<int>& arr,int key) {
    int low = 0, high = arr.size()-1;
    while(low<high)
 {
        int mid = (low+high)/2;
        if(arr[mid]==key)
        return true;
        else if(arr[mid]<key)
        low = mid+1;
        else
        high = mid-1;
 }
 return false;
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    cout << binarySearch(arr,7);
    return 0;
}