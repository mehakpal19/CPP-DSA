#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
//Bruteforce approach -> TC : O(n*n*n * log(uniqueTriplet)) & SC : O(uniqueTriplet)
// vector<vector<int>> threeSum(vector<int>& arr) {
//     vector<vector<int>> ans;
//     set<vector<int>> s;
//     int n = arr.size();
//     for(int i=0; i<n; i++) {
//         for(int j=i+1; j<n; j++) {
//             for(int k=j+1; k<n; k++) {
//                 if(arr[i]+arr[j]+arr[k]==0) {
//                     vector<int> trip = {arr[i],arr[j],arr[k]};
//                     sort(trip.begin(),trip.end());
//                     if(s.find(trip)==s.end()) {
//                         s.insert(trip);
//                         ans.push_back(trip);
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }


//Hashing -> TC : O(n*n * log(uniqueTriplets)) & SC : O(log(uniqueTriplets) + n)
// vector<vector<int>> threeSum(vector<int>& arr) {
//     int n = arr.size();
//     int a,c;
//     set<vector<int>> uniqueT;
//     for(int i=0; i<n; i++) {
//         a = -arr[i];
//         set<int> s;
//         for(int j=i+1; j<n; j++) {
//             c = a-arr[j];
//             if(s.find(c)!=s.end()) {
//                 vector<int> trip = {arr[i],arr[j],c};
//                 sort(trip.begin(),trip.end());
//                 uniqueT.insert(trip);
//             }
//             s.insert(arr[j]);
//         }
//     }
//     vector<vector<int>> ans(uniqueT.begin(),uniqueT.end());
//     return ans;
// }

//Two pointer approach -> TC : O(n*n + n log n) & SC : O(uniqueTriplets)
vector<vector<int>> threeSum(vector<int>& arr) {
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    int n = arr.size();
    for(int i=0; i<n; i++) {
        if(i>0 && arr[i]==arr[i-1]) continue;
        int j=i+1, k=n-1;
        while(j<k) {
            int sum = arr[i]+arr[j]+arr[k];
            if(sum<0)
            j++;
            else if(sum>0)
            k--;
            else {
                ans.push_back({arr[i],arr[j],arr[k]});
                j++,k--;
                while(j<k && arr[j]==arr[j-1]){
                    j++;
                }
            }
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {-1,0,1,2,-1,4};
    vector<vector<int>> ans = threeSum(arr);
    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[0].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}