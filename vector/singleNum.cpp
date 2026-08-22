#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int singleN(vector<int>& nums) {
        int ans = 0;
        for(int val : nums) {
        ans ^= val;             //If numbers are positive
    }
    return ans;
}
};
int main() {
    Solution s;
    vector<int> v = {4,1,2,1,2};
    cout << s.singleN(v);
    return 0;
}

//If numbers are negative
// int singleN(vector<int>& nums) {
//         int ans = 0;
//         for(int val : nums) {
//         ans += val;             
//     }
//     return ans;
// }