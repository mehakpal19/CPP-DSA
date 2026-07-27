#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
//Two Pointer -> TC : O(n) & SC : O(1)
// void reverseString(string& s) {
//     int st = 0, end = s.length()-1;
//     while(st<end) {
//         swap(s[st],s[end]);
//         st++,end--;
//     }
// }

//Recursion -> TC : O(n) & SC : O(n)
// void reverseString(string& s, int st, int end) {
//     if(st>=end) return ;
//     swap(s[st],s[end]);
//     reverseString(s,st+1,end-1);
// }

//Stack -> TC : O(n) & SC : O(n)
// void reverseString(string& s) {
//     stack<char> st;
//     for(int i=0; i<s.length(); i++) {
//         st.push(s[i]);
//     }
//     for(int i=0; i<s.length(); i++) {
//         s[i] = st.top();
//         st.pop();
//     }
// }

int main() {
    string s = "Hello";

    // reverseString(s);

    //Inbuilt function 
    reverse(s.begin(),s.end());
    cout << s;
    return 0;
}
