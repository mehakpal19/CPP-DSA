#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<vector<int>> ksmallest_pairs(vector<int>& n1, vector<int>& n2, int k) {
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
    vector<vector<int>> ans;
    for(int i=0; i<n1.size(); i++) {
        pq.push({n1[i]+n2[0],{i,0}});
    }
    while(!pq.empty() && k>0) {
        auto top = pq.top();
        int i = top.second.first;
        int j = top.second.second;
        pq.pop();
        ans.push_back({n1[i],n2[j]});
        if(j+1 < n2.size()) 
        pq.push({n1[i]+n2[j+1],{i,j+1}});
        k--;
    }
    return ans;
}

int main() {
    vector<int> n1 = {1,7,11};
    vector<int> n2 = {2,4,6};
    vector<vector<int>> ans = ksmallest_pairs(n1,n2,3);
    for(auto row : ans) {
        for(int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}