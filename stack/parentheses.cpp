#include<iostream>
#include<string>
#include<stack>
using namespace std;


//VALID PARENTHESES
bool isValid(string str) {
    stack<char> st;
    for(int i=0; i<str.size(); i++) {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        st.push(str[i]);
        else {
            if(st.size()==0) return false;
            if((st.top()=='(' && str[i]==')') || (st.top()=='{' && str[i]=='}') || (st.top()=='[' && str[i]==']'))
            st.pop();
            else return false;
        }}
        return st.size()==0;
}

int main() {
    string str = "({[]}[])";
    string str1 = "({}[]";
    cout << isValid(str);
    cout << isValid(str1);
    return 0;
}