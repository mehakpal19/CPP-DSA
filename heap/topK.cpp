#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

vector<int> topK(vector<int>& nums, int k) {
    vector<int> ans;
    unordered_map<int,int> mp;
    for(int x : nums) {
        mp[x]++;
    }
    priority_queue<pair<int,int>> pq;
    for(auto p : mp) {
        pq.push({p.second,p.first});
    }
    while(k>0) {
        ans.push_back(pq.top().second);
        pq.pop();
        k--;
    }
    return ans;
}

int main() {
    vector<int> nums = {1,1,1,2,2,3};
    vector<int> ans = topK(nums,2);
    for(int x : ans) {
        cout << x << " ";
    }
    return 0;
}