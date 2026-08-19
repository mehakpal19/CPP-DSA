#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class Solution{
    public:
    int maxSum(vector<int>& nums) {
        int currSum = 0, maxSum = INT_MIN;
        for(int val : nums) {
            currSum += val;                 //Kadanes Algorithm
            maxSum = max(currSum,maxSum);
            if(currSum<0) {
                currSum = 0;
            }
        }
        return maxSum;
    }
};
int main() {
    Solution s;
    vector <int> v = {3,-4,5,4,-1,7,-8};
    cout << s.maxSum(v);
   
    return 0;
}

//BruteForce Method
//  int maxSum = INT_MIN;
//     for(int st=0; st<n; st++) {
//         int currSum = 0;
//         for(int end=st; end<n; end++) {
//             currSum += arr[end];
//             maxSum = max(currSum,maxSum);     
//     }
// }
//     cout << "Maximum SubArray Sum = " << maxSum;

//Printing maximum subarray of an array
//  for(int st=0; st<n; st++) {
//         for(int end=st; end<n; end++) {
//             for(int i=st; i<=end; i++) {
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
