#include<iostream>
#include<string>
#include<stack>
using namespace std;

string simply_path(string path) {
    stack<string> s;
    string temp = "";
    for(int i=0; i<=path.length(); i++) {
        if(path[i]=='/' || i==path.length()) {
            if(temp=="..") {
                if(!s.empty()) {
                    s.pop();
                }
            }
            else if(temp!="" && temp!=".") {
                s.push(temp);
            }
            temp = "";
        }
        else {
            temp += path[i];
        }
    }
    string ans = "";
    while(!s.empty()) {
        ans = "/" + s.top() + ans;
        s.pop();
    }
    if(ans=="")
    return "/";
    return ans;
}

int main() {
    string path = "/.../a/../b/c/../d/./";
    string ans = simply_path(path);
    cout << ans;
    return 0;
}