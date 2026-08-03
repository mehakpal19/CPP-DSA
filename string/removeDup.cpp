#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;
//Hashing -> TC : O(n) & SC : O(1)
// int removeDup(string& s) {
//     int idx = 0;
//     unordered_set<char> ans;
//     for(char ch : s) {
//         if(ans.find(ch)==ans.end()) {
//             ans.insert(ch);
//             s[idx++] = ch;
//         }
//     }
//     return ans.size();
// }

//Frequency Array -> TC : O(n) & SC : O(1)
string removeDup(string& s) {
    vector<int> f(256,0);
    string ans = "";
    for(char ch : s) {
        if(f[ch]==0) {
            ans.push_back(ch);
            f[ch]++;
        }
    }
    return ans;
}
int main() {
    string s = "aabbbc";
    // int size = removeDup(s);
    // for(int i=0; i<size; i++) {
    //     cout << s[i] << " ";
    // }
    string res = removeDup(s);
    cout << res;
    return 0;
}