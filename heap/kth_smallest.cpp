#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

//Priority Queue
// int kth_smallest(vector<vector<int>>& nums, int k) {
//     priority_queue<int> maxHeap;
//     for(auto row : nums) {
//         for(int x : row) {
//             maxHeap.push(x);
//             if(maxHeap.size()>k) 
//             maxHeap.pop();
//         }
//     }
//     return maxHeap.top();
// }


//Binary Search
int count(vector<vector<int>>& mat, int x) {
    int n = mat.size(), m = mat[0].size();
    int c = 0;
    for(int i=0; i<n; i++) {
        c += upper_bound(mat[i].begin(),mat[i].end(),x)-mat[i].begin();
    }
    return c;
}

int kth_smallest(vector<vector<int>>& mat, int k) {
    int n = mat.size(), m = mat[0].size();
    int ans = -1;
    int l = mat[0][0], h = mat[n-1][m-1];
    while(l<=h) {
        int mid = l+(h-l)/2;
        int c = count(mat,mid);
        if(c>=k) {
            ans = mid;
            h = mid-1;
        }
        else 
        l = mid+1;
    }
    return ans;
}

int main() {
    vector<vector<int>> nums = {
        {1,5,9},
        {10,11,13},
        {12,13,15}
    };
    cout << kth_smallest(nums,8);
    return 0;
}