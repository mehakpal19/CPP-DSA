#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> pairSum(vector<int>& v, int target) {
        int i=0, j=v.size();
        int ps;
        vector <int> ans;
        while(i<j) {
            ps = v[i] + v[j];           //Two-Pointer Approach
            if(ps>target) 
            j--;
            else if (ps<target)
            i++;
            else {
                ans.push_back(v[i]);
                ans.push_back(v[j]);
                return ans;
            }
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int> v = {2,7,11,15};
    int target = 9;
    vector<int> ans = s.pairSum(v,target);
    cout << ans[0] << endl << ans[1];
    return 0;
}