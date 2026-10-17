//SLIDING WINDOW MAXIMUM -> DEQUE
#include<iostream>
#include<deque>
#include<vector>
using namespace std;
vector<int> slidingWindowMax(vector<int>& nums, int k) {
    vector<int> ans;
    deque<int> dq;
    for(int i=0; i<k; i++) {
        while(dq.size()>0 && nums[dq.back()]<=nums[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(int i=k; i<nums.size(); i++) {
        ans.push_back(nums[dq.front()]);
        while(dq.size()>0 && dq.front()<=i-k) {
            dq.pop_front();
        }
        while(dq.size()>0 && nums[dq.back()]<=nums[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(nums[dq.front()]);
    return ans;
}

int main() {
    vector<int> v = {1,3,-1,-3,5,3,6,7};
    vector<int> ans = slidingWindowMax(v,3);
    for(int val : ans) {
        cout << val << " ";
    }
    return 0;
}