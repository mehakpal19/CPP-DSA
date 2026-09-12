#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Linear Search -> TC : O(n) & SC : O(1)
// int frequency(vector<int>& arr, int x) {
//     int f = 0;
//     for(int i=0; i<arr.size(); i++) {
//         if(arr[i]==x)
//         f++;
//     }
//     return f;
// }

//Binary Search -> TC : O(log n) & SC : O(1)
int frequency(vector<int>& arr, int x) {
    int first = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
    int last = upper_bound(arr.begin(),arr.end(),x)-arr.begin();
    return last-first;
}

int main() {
    vector<int> arr = {1,2,5,5,5,5,7,8};
    cout << frequency(arr,5);
    return 0;
}