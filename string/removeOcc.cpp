#include<iostream>
#include<string>
using namespace std;
string removeOccurrences(string s, string part) {
    while(s.length()>0 && s.find(part)<s.length()) {
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main () {
    string s1 = "abcooabcoo";
    string s2 = "oo";
    string ans = removeOccurrences(s1,s2);
    cout << ans;
    return 0;
}