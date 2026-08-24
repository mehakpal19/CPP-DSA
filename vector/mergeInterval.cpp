#include<iostream>
#include<vector>
using namespace std;
//For unsorted array -> Sorting : TC : O(n log n) & SC : O(1)
//For sorted array -> Sorting not used : TC : O(n) & SC : O(1)
vector<vector<int>> mergeIntervals(vector<vector<int>>& arr) {
    int n = arr.size();
    vector<vector<int>> ans;
    vector<int> curr = {arr[0][0],arr[0][1]};
    for(int i=1; i<n; i++) {
        if(curr[1]>=arr[i][0])
        curr = {curr[0],max(curr[1],arr[i][1])};
        else {
            ans.push_back(curr);
            curr = {arr[i][0],arr[i][1]};
        }
    }
    ans.push_back(curr);
    return ans;
}
int main() {
    vector<vector<int>> arr = {
        {1,3},
        {2,6},
        {8,10},
        {15,18}
    };
    vector<vector<int>> ans = mergeIntervals(arr);
    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[0].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}