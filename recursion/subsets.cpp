#include<iostream>
#include<vector>
using namespace std;
void subsets(vector<int>& arr, int idx, vector<int>& ans) {
    if(idx==arr.size()) {
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
        return ;
    }
    ans.push_back(arr[idx]);
    subsets(arr,idx+1,ans);
    ans.pop_back();
    subsets(arr,idx+1,ans);
}
int main() {
    vector<int> arr = {1,2,3};
    vector<int> ans;
    subsets(arr,0,ans);
}