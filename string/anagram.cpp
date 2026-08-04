#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;
//Sorting -> TC : O(n log n + m log m) & SC : O(1)
// bool isAnagram(string& s1, string& s2) {
//     if(s1.length()!=s2.length())
//     return false;
//     sort(s1.begin(),s1.end());
//     sort(s2.begin(),s2.end());
//     return s1==s2;
// }

//Hash Map -> TC : O(m+n) & SC : O(1)
bool isAnagram(string& s1, string& s2) {
    if(s1.length()!=s2.length())
        return false;
    unordered_map<char,int> m;
    for(char ch : s1) {
        m[ch]++;
    }
    for(char ch : s2) {
        m[ch]--;
    }
    for(auto pair : m) {
        if(pair.second!=0)
        return false;
    }
    return true;
}

//Frequency Array -> TC : O(n) & SC : O(1)
// bool isAnagram(string& s1, string& s2) {
        // if(s1.length()!=s2.length())
        // return false;
//     int f[26] = {0};
//     for(char ch : s1) {
//         f[ch-'a']++;
//     }
//     for(char ch : s2) {
//         f[ch-'a']--;
//     }
//     for(int i : f) {
//         if(f[i]!=0)
//         return false;
//     }
//     return true;
// }
int main() {
    string s1 = "come";
    string s2 = "edoc";
    cout << isAnagram(s1,s2);
    return 0;
}