#include<iostream>
#include<vector>
#include<string>
using namespace std;
void get_strPerm(string curr, string rem, vector<string> &ans) {
    if(rem.length()==0) {
        ans.push_back(curr);
        return ;
    }
    for(int i=0; i<rem.length(); i++) {
        char ch = rem[i];
        string nextCurr = curr + ch;
        string nextRem = rem.substr(0,i) + rem.substr(i+1);
        get_strPerm(nextCurr,nextRem,ans);
    }
}

vector<string> str_Perm(string s) {
    vector<string> ans;
    get_strPerm("",s,ans);
    return ans;
}
int main() {
    string s = "abc";
    vector<string> sP = str_Perm(s);
    for(string val : sP) {
        cout << val << " ";
    }
    return 0;
}