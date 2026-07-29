#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
//Bruteforce approach -> TC : O(n*n) & SC : O(1)
// void frequency(string& s) {
//     int f;
//     for(int i=0; i<s.length(); i++) {
//         f = 1;
//         if(s[i]!=-1 && s[i]!=' ') {
//             for(int j=i+1; j<s.length(); j++) {
//                 if(s[i]==s[j]) {
//                     f++;
//                     s[j] = -1;
//                 }
//             }
//             cout << s[i] << " has a frequency of " << f << endl;
//         }
//     }
// }

// Hash Map -> TC : O(n) & O(k)
void frequency(string& s) {
    unordered_map<char,int> freq;
    for(char ch : s) {
        if(ch!=' ')
        freq[ch]++;
    }
    for(auto pair : freq) {
        cout << pair.first << " has a frequency of " << pair.second << endl;
    }
}

//Frequency Array -> TC : O(n) & SC : O(1)
// void frequency(string& s) {
//     int f[256] = {0};
//     for(char ch : s) {
//         if(ch!=' ') 
//         f[ch]++;
//     }
//     for(char ch : s) {
//         if(f[ch]!=0) {
//             cout << ch << " has a frequency of " << f[ch] << endl;
//             f[ch] = 0;
//         }
//     }
// }
int main() {
    string s = "Hello World";
    frequency(s);
    return 0;
}