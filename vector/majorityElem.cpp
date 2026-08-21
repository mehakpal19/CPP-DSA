#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int majorityElem(vector<int>& v) {
        int ans = 0, freq = 0;
        for(int i=0; i<v.size(); i++) {
            if(freq==0)             //Moores Voting Algorithm                 
            ans = v[i];
            if(ans==v[i])
            freq++;
            else
            freq--;
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int> v = {1,2,2,1,1};
    cout << s.majorityElem(v);
    return 0;
}