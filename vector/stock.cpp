#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0, buy = prices[0];
        for(int i=1; i<prices.size(); i++) {
            if(prices[i]>buy)
            maxP = max(maxP,prices[i]-buy);
            buy = min(buy,prices[i]);
        }
        return maxP;
    }
};
int main() {
    vector<int> prices = {7,1,5,3,6,4};
    int n = 6;
    Solution s;
    cout << s.maxProfit(prices);
    return 0;
}