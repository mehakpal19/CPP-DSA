#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& arr, int tar) {
    unordered_map<int,int> m;
    vector<int> ans;
    for(int i=0; i<arr.size(); i++) {
        int first = arr[i];
        int second = tar-first;
        if(m.find(second)!=m.end()) {
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first] = i;
    }
    return ans;
}
int main() {
    vector<int> arr = {5,2,11,7,13};
    vector<int> ans = twoSum(arr,9);
    for(int val : ans) {
        cout << val << " ";
    }
    return 0;
}