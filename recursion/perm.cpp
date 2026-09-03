#include<iostream>
#include<vector>
using namespace std;
void getPerm(vector<int>& arr, int idx, vector<vector<int>>& ans) {
    if(idx==arr.size()) {
        ans.push_back({arr});
        return ;
    }
    for(int i=idx; i<arr.size(); i++) {
        swap(arr[idx],arr[i]);
        getPerm(arr,idx+1,ans);
         swap(arr[idx],arr[i]);
    }
}
vector<vector<int>> Perm(vector<int>& arr) {
    vector<vector<int>> ans;
    getPerm(arr,0,ans);
    return ans;
}
int main() {
    vector<int> arr = {1,2,3};
    vector<vector<int>> ans = Perm(arr);
    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[0].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}