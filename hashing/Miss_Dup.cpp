#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
vector<int> Missing_Dup(vector<vector<int>>& grid) {
    unordered_set<int> s;
    vector<int> ans;
    int a,b,n=grid.size();
    int ExpSum = 0, ActSum = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            ActSum += grid[i][j];
            if(s.find(grid[i][j])!=s.end()) {
                ans.push_back(grid[i][j]);
                a = grid[i][j];
            }
            s.insert(grid[i][j]);
        }
    }
    ExpSum = (n*n) * (n*n+1)/2;
    b = ExpSum+a-ActSum;
    ans.push_back(b);
    return ans;
}
int main() {
    vector<vector<int>> grid = {
        {9,1,7},
        {8,9,2},
        {3,4,6}
    };
    vector<int> ans = Missing_Dup(grid);
    for(int val : ans) {
        cout << val << " ";
    }
    return 0;
}